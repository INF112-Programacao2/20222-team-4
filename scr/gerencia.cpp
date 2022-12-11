#include "gerencia.h"
#include <iostream>
#include <iomanip>

std::vector<Vendedor> Gerencia::listaVendedores = std::vector<Vendedor>();
std::vector<Gerente> Gerencia::listaGerentes = std::vector<Gerente>();
std::vector<Produto> Gerencia::carrinhoCompras = std::vector<Produto>();
std::vector<Pagamento> Gerencia::listaPagamentos = std::vector<Pagamento>();

Gerencia::Gerencia() : Estoque()
{
    // banco de dados fake
    this->cadastrarGerente(Gerente("Matheus", 16688877763, 10, 18.75, 40));
    this->cadastrarGerente(Gerente("Vitoria", 15566678822, 10, 18.75, 40));
    this->cadastrarGerente(Gerente("Rafael", 25533655822, 10, 18.75, 40));

    this->cadastrarVendedor(Vendedor("Bianca", 15199952233, 10, 9.375, 40));
    this->cadastrarVendedor(Vendedor("Julia", 33355544488, 10, 9.375, 40));
    this->cadastrarVendedor(Vendedor("Pedro", 6666666, 10, 9.375, 40));
}

// funcoes que chamamos na main

void Gerencia::novaVenda(int idFuncionario, std::string nomeCliente, std::string documentoCliente, int idProduto, double desconto, double valorTotal)
{
    // essa funcao esta quase pronta, falta somente armazenar a venda (tentando)....
    char resposta;
    double total = 0;
    int quantidadeEstoque;

    std::cout << "----- CADASTRO DE VENDAS -----\n\n";
    std::cout << "Vamos cadastrar uma nova venda!\n";
    std::cout << "Insira os dados abaixo: \n";
    std::cout << "----- VENDEDOR -----\n";

    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaVendedores[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaVendedores[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }

    std::cout << "\n\nDigite o ID do vendedor: \n";
    std::cin >> idFuncionario;
    // tratar a excessao da entrada
    std::cout << "----- CLIENTE -----\n";

    std::cout << "\nDigite o nome do cliente: \n";
    std::cin.ignore();
    getline(std::cin, nomeCliente);
    // tratar a excessao da entrada

    std::cout << "\nDigite o CPF do cliente (Apenas numeros): \n";
    std::getline(std::cin, documentoCliente);

    std::cout << "----- PRODUTOS -----";
    std::cout << "\nInsira os produtos no carrinho:\n";

    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        std::cout << "ID - " << Estoque::listaProdutos[i].getId() << std::endl;
        std::cout << "NOME - " << Estoque::listaProdutos[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }

    std::cout << "Digite o ID do produto: \n";
    std::cout << "Para fechar o carrinho digite -1\n";
    while (idProduto != -1)
    {
        std::cin >> idProduto;

        for (int i = 0; i < Estoque::listaProdutos.size(); i++)
        {
            if (idProduto == Estoque::listaProdutos[i].getId())
            {
                // Consulta no estoque a quantidade de produtos
                if (Estoque::consultaEstoque(listaProdutos[i]) > 0)
                {
                    // adiciona o produto ao vector novo carrinho
                    this->novoCarrinho(Estoque::listaProdutos[i]);

                    // tira 1 da quantidade do produto no estoque
                    quantidadeEstoque = listaProdutos[i].getQuantidade() - 1;
                    listaProdutos[i].setQuantidade(quantidadeEstoque);
                }
                else
                {
                    std::cout << "Produto fora de estoque!\n";
                }
            }
        }
    }

    // tratar a excessao da entrada

    std::cout << "===== DESCONTO =====\n";
    std::cout << "% Desconto (digite 0 para nenhum desconto): \n";
    std::cin >> desconto;
    // tratar a excessao da entrada (proibido numeros negativos)

    for (int i = 0; i < Gerencia::carrinhoCompras.size(); i++)
    {
        total = total + Gerencia::carrinhoCompras[i].getPreco();
    }

    valorTotal = total - (total * (desconto / 100.0));

    std::cout << "===== PAGAMENTO =====\n";
    std::cout << "Resumo de compras: \n";
    for (int i = 0; i < Gerencia::carrinhoCompras.size(); i++)
    {
        std::cout << "Item: " << Gerencia::carrinhoCompras[i].getNome() << std::endl;
        std::cout << "Preco: " << Gerencia::carrinhoCompras[i].getPreco() << std::endl;
        std::cout << "------------: \n";
    }

pagamento:
    std::cout << "Valor total: R$" << std :: fixed << std::setprecision(2) << valorTotal;
    std::cout << "\n\nPagamento efetuado? (s/n) ";
    std::cin >> resposta;

    // tratar a excessao da entrada

    if (resposta == 's' || resposta == 'S')
    {

        std::cout << "Venda registrada com sucesso!\n";
    }
    else if (resposta == 'n' || resposta == 'N')
    {
        std::cout << "Venda cancelada!\n";
    }
    else
    {
        std::cout << "Entrada invalida, digite apenas: 's' ou 'n'.\n";
        goto pagamento;
    }
}

// novo vendedor e novo gerente estao prontos...
void Gerencia::novoVendedor(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    std::cout << "----- VENDEDOR -----\n";

    std::cout << "\nDigite o nome do vendedor: \n";
    std::cin.ignore();
    getline(std::cin, nome);
    // tratar a excessao da entrada

    std::cout << "\nDigite o CPF do vendedor (Apenas numeros): \n";
    std::cin >> documento;

    std::cout << "\nDigite o valor do salario por hora: \n";
    std::cin >> salarioBase;

    std::cout << "\nDigite a quantidade de horas semanais: \n";
    std::cin >> horasSemanais;

    this->cadastrarVendedor(Vendedor(nome, documento, porcentagemComissao, salarioBase, horasSemanais));

    std ::cout << "Vendedor cadastrado com sucesso!" << std ::endl;
}

void Gerencia::novoGerente(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    std::cout << "----- GERENTE -----\n";

    std::cout << "\nDigite o nome do gerente: \n";
    std::cin.ignore();
    getline(std::cin, nome);
    // tratar a excessao da entrada

    std::cout << "\nDigite o CPF do gerente (Apenas numeros): \n";
    std::cin >> documento;

    std::cout << "\nDigite o valor do salario base: \n";
    std::cin >> salarioBase;

    std::cout << "\nDigite a quantidade de horas semanais: \n";
    std::cin >> horasSemanais;

    this->cadastrarGerente(Gerente(nome, documento, porcentagemComissao, salarioBase, horasSemanais));

    std ::cout << "Gerente cadastrado com sucesso!" << std ::endl;
}

// EDITAR GERENTE E VENDEDOR (falta editar vendedor)

void Gerencia::editarGerente(int idFuncionario, std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    std::cout << " ----- EDITAR GERENTE ----- \n";
    for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaGerentes[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaGerentes[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }
    std::cout << "Digite o id do gerente que voce deseja editar:: \n";
    std::cin >> idFuncionario;

    for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
    {
        if (Gerencia::listaGerentes[i].getId() == idFuncionario)
        {

            int op;
            std::cout << "O que deseja editar?: \n";
            std::cout << "1 - Nome: \n";
            std::cout << "2 - Documento: \n";
            std::cout << "3 - Porcentagem comissao: \n";
            std::cout << "4 - Salario base (por hora): \n";
            std::cout << "5 - Horas semanais: \n";
            std::cin >> op;
            if (op == 1)
            {
                std::cout << "Digite o novo nome: \n";
                std::cin.ignore();
                getline(std::cin, nome);
                Gerencia::listaGerentes[i].setNome(nome);
            }
            if (op == 2)
            {
                std::cout << "Digite o novo documento: \n";
                std::cin >> documento;
                Gerencia::listaGerentes[i].setDocumento(documento);
            }
            if (op == 3)
            {
                std::cout << "Digite a nova porcentagem de comissao: \n";
                std::cin >> porcentagemComissao;
                Gerencia::listaGerentes[i].setPorcentagemComissao(porcentagemComissao);
            }
            if (op == 4)
            {
                std::cout << "Digite o novo salario base (por hora): \n";
                std::cin >> salarioBase;
                Gerencia::listaGerentes[i].setSalarioBase(salarioBase);
            }
            if (op == 5)
            {
                std::cout << "Digite a nova quantidade de horas semanais: \n";
                std::cin >> horasSemanais;
                Gerencia::listaGerentes[i].setHorasSemanais(horasSemanais);
            }

        }
    }
    std::cout << "Gerente editado com sucesso!\n";
}

void Gerencia::editarVendedor(int idFuncionario, std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    std::cout << " ----- EDITAR VENDEDOR ----- \n";
    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaVendedores[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaVendedores[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }
    std::cout << "Digite o id do gerente que voce deseja editar:: \n";
    std::cin >> idFuncionario;

    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        if (Gerencia::listaVendedores[i].getId() == idFuncionario)
        {

            int op;
            std::cout << "O que deseja editar?: \n";
            std::cout << "1 - Nome: \n";
            std::cout << "2 - Documento: \n";
            std::cout << "3 - Porcentagem comissao: \n";
            std::cout << "4 - Salario base (por hora): \n";
            std::cout << "5 - Horas semanais: \n";
            std::cin >> op;
            if (op == 1)
            {
                std::cout << "Digite o novo nome: \n";
                std::cin.ignore();
                getline(std::cin, nome);
                Gerencia::listaVendedores[i].setNome(nome);
            }
            if (op == 2)
            {
                std::cout << "Digite o novo documento: \n";
                std::cin >> documento;
                Gerencia::listaVendedores[i].setDocumento(documento);
            }
            if (op == 3)
            {
                std::cout << "Digite a nova porcentagem de comissao: \n";
                std::cin >> porcentagemComissao;
                Gerencia::listaVendedores[i].setPorcentagemComissao(porcentagemComissao);
            }
            if (op == 4)
            {
                std::cout << "Digite o novo salario base (por hora): \n";
                std::cin >> salarioBase;
                Gerencia::listaVendedores[i].setSalarioBase(salarioBase);
            }
            if (op == 5)
            {
                std::cout << "Digite a nova quantidade de horas semanais: \n";
                std::cin >> horasSemanais;
                Gerencia::listaVendedores[i].setHorasSemanais(horasSemanais);
            }
        }
    }
    std::cout << "Vendedor editado com sucesso!\n";
}

// FUNCOES DE ESTOQUE

void Gerencia::novoProduto(std::string nomeProduto, double preco, int quantidade)
{
    // perguntar o nome do item, preco e quantidade

    std::cout << "Qual o nome do produto? \n";
    std::cin.ignore();
    getline(std::cin, nomeProduto);
    std::cout << "Qual sera o preco do produto? \n";
    std::cin >> preco;
    std::cout << "Qual a quantidade do produto? \n";
    std::cin >> quantidade;

    Estoque::adicionarProduto(Produto(nomeProduto, preco, quantidade));

    // Estoque::adicionarProdutos(Produto(nomeProduto,preco, quantidade));
}
// imprime produtos do estoque com a quantidade

void Gerencia::imprimeProdutos()
{
    std::cout << std::endl;
    std::cout << "Produtos disponiveis no estoque: \n";
    std::cout << std::endl;

    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        std::cout << "ID: " << Estoque::listaProdutos[i].getId() << std::endl;
        std::cout << "NOME: " << Estoque::listaProdutos[i].getNome() << std::endl;
        std::cout << "QUANTIDADE: " << Estoque::listaProdutos[i].getQuantidade() << std::endl;
        std::cout << "---------------------------- \n";
    }
}

void Gerencia::editarEstoque(int idProduto, std::string nomeProduto, double preco, int quantidade)
{
    //
    std::cout << " ----- EDITAR ESTOQUE ----- \n";
    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        std::cout << "ID - " << Estoque::listaProdutos[i].getId() << std::endl;
        std::cout << "NOME - " << Estoque::listaProdutos[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }
    std::cout << "Digite o id do produto que voce deseja editar:: \n";
    std::cin >> idProduto;

    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        if (Estoque::listaProdutos[i].getId() == idProduto)
        {

            int op;
            std::cout << "O que deseja editar?: \n";
            std::cout << "1 - Nome: \n";
            std::cout << "2 - Preco: \n";
            std::cout << "3 - Adicionar mais quantidades no estoque: \n";
            std::cin >> op;
            if (op == 1)
            {
                std::cout << "Digite o novo nome: \n";
                std::cin.ignore();
                getline(std::cin, nomeProduto);
            }
            if (op == 2)
            {
                std::cout << "Preco atual: " << Estoque::listaProdutos[i].getPreco() << std::endl;

                std::cout << "Digite o novo preco: \n";
                std::cin >> preco;
            }
            if (op == 3)
            {
                int adicionarQuantidade;

                std::cout << "Quantidade atual: " << Estoque::listaProdutos[i].getQuantidade() << std::endl;

                std::cout << "Digite a quantidade que deseja adicionar: \n";
                std::cin >> adicionarQuantidade;

                quantidade = adicionarQuantidade + Estoque::listaProdutos[i].getQuantidade();
            }

            Produto novoProduto(nomeProduto, preco, quantidade);
            Estoque::listaProdutos[i] = novoProduto;
        }
    }
    std::cout << "Estoque editado com sucesso!\n";
}

void Gerencia::calculaPagamento(int idFuncionario, double horasSemanais, double horasExtras, double vendasTotais, double comissao, double salarioBase)
{
    double salario;
    int op;
    std::cout << " ----- NOVO PAGAMENTO ----- \n";
    std::cout << "\nVamos registrar um novo pagamento. Escolha abaixo o cargo do funcionario: \n";
    std::cout << "1 - Gerente: \n";
    std::cout << "2 - Vendedor: \n";
    std::cin >> op;

    // se for gerente
    if (op == 1)
    {
        // imprime a lista de gerentes pro usuario escolher

        for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
        {
            std::cout << "ID - " << Gerencia::listaGerentes[i].getId() << std::endl;
            std::cout << "NOME - " << Gerencia::listaGerentes[i].getNome() << std::endl;
            std::cout << "---------------------\n";
        }

        std::cout << "Digite o id do gerente: \n";
        std::cin >> idFuncionario;

        for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
        { // compara o id do funcionario com os ids da lista
            if (Gerencia::listaGerentes[i].getId() == idFuncionario)
            {
                // quando encontrar a posicao referente ao id
                horasSemanais = Gerencia::listaGerentes[i].getHorasSemanais();
                salarioBase = Gerencia::listaGerentes[i].getSalarioBase();
                vendasTotais = Gerencia::listaGerentes[i].getTotalVendas();
                comissao = Gerencia::listaGerentes[i].getPorcentagemComissao();

                std::cout << "\nAdicionar pagamento para o gerente " << Gerencia::listaGerentes[i].getNome() << ": ";
            }
        }
    }
    else if (op == 2)
    {
        for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
        {
            std::cout << "ID - " << Gerencia::listaVendedores[i].getId() << std::endl;
            std::cout << "NOME - " << Gerencia::listaVendedores[i].getNome() << std::endl;
            std::cout << "---------------------\n";
        }
        std::cout << "Digite o id do vendedor: \n";
        std::cin >> idFuncionario;

        for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
        {
            if (Gerencia::listaVendedores[i].getId() == idFuncionario)
            {
                horasSemanais = Gerencia::listaVendedores[i].getHorasSemanais();
                salarioBase = Gerencia::listaVendedores[i].getSalarioBase();
                vendasTotais = Gerencia::listaVendedores[i].getTotalVendas();
                comissao = Gerencia::listaVendedores[i].getPorcentagemComissao();

                std::cout << "\nAdicionar pagamento para o vendedor " << Gerencia::Gerencia::listaVendedores[i].getNome() << ": ";
            }
        }
    }

    std::cout << "\nHoras extras do funcionario: \n";
    std::cin >> horasExtras;

    // calculo do salario mensal

    salario = (salarioBase) * ((horasSemanais * 4) + horasExtras) + (vendasTotais * (comissao / 100.0));

    // cria um novo pagamento dentro da lista de pagamentos

    this->novoPagamento(Pagamento(idFuncionario, salario));

    for (int i = 0; i < Gerencia::listaPagamentos.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaPagamentos[i].getFuncionario() << "\n";
        std::cout << "Valor recebido em R$: " << Gerencia::listaPagamentos[i].getPagamento() << "\n";
    }
}

// FUNÇÕES QUE CRIAM UM NOVO OBJETO - nao mexer

void Gerencia::cadastrarVendedor(const Vendedor &vendedor)
{
    Gerencia::listaVendedores.push_back(vendedor);
}

void Gerencia::cadastrarGerente(const Gerente &gerente)
{
    Gerencia::listaGerentes.push_back(gerente);
}

void Gerencia::novoCarrinho(const Produto &produto)
{
    Gerencia::carrinhoCompras.push_back(produto);
}
void Gerencia::novoPagamento(const Pagamento &pagamento)
{
    Gerencia::listaPagamentos.push_back(pagamento);
}

// FUNCOES PARA BUSCAR - nao mexer

int Gerencia::buscarItem(Vendedor vendedor)
{
    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        if (Gerencia::listaVendedores[i].getId() == vendedor.getId())
        {
            return i;
        }
    }

    return -1;
}

int Gerencia::buscarItem(Gerente gerente)
{
    for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
    {
        if (Gerencia::listaGerentes[i].getId() == gerente.getId())
        {
            return i;
        }
    }

    return -1;
}

Gerencia::~Gerencia()
{
}