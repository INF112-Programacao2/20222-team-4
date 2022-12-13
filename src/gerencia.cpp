#include "gerencia.h"
#include <iostream>
#include <iomanip>
#include <unistd.h>

std::vector<Vendedor> Gerencia::listaVendedores = std::vector<Vendedor>();
std::vector<Gerente> Gerencia::listaGerentes = std::vector<Gerente>();
std::vector<Pagamento> Gerencia::listaPagamentos = std::vector<Pagamento>();
std::vector<Vendas> Gerencia::listaVendas = std::vector<Vendas>();

Gerencia::Gerencia() : Estoque()
{
    // banco de dados fake
    this->cadastrarItem(Gerente("Matheus", 16688877763, 10, 18.75, 40));
    this->cadastrarItem(Gerente("Vitoria", 15566678822, 10, 18.75, 40));
    this->cadastrarItem(Gerente("Rafael", 25533655822, 10, 18.75, 40));

    this->cadastrarItem(Vendedor("Bianca", 15199952233, 10, 9.375, 40));
    this->cadastrarItem(Vendedor("Julia", 33355544488, 10, 9.375, 40));
    this->cadastrarItem(Vendedor("Pedro", 6666666, 10, 9.375, 40));
}

// VENDAS

void Gerencia::novaVenda(int idFuncionario, std::string nomeCliente, std::string documentoCliente, int idProduto, double desconto, double valorTotal)
{
novavenda:
    // variaveis para o tratamento de excessoes
    std::string idFunc, idProd, desc, quant;

    int comprou = 0;
    Vendas venda;          // variavel que guarda as informacoes da venda
    Estoque estoque;       // variavel que guarda as informacoes do estoque
    char resposta;         // resposta do menu
    double total = 0;      // variavel que acumula o preco dos produtos
    int quantidadeEstoque; // variavel que guarda a quantidade do produto X no estoque
    int quantidade;        // quantidade do produto que o cliente comprou
    std::vector<int> produtosComprados;
    std::vector<int> quantidadeInicial;

    std::system("clear");
    std::cout << "----- CADASTRO DE VENDAS -----\n\n";
    std::cout << "Vamos cadastrar uma nova venda!\n\n";
    std::cout << "Insira os dados abaixo: \n\n";
    std::cout << "----- VENDEDOR -----\n";

    // imprimindo a lista de vendedores

    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaVendedores[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaVendedores[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }

    // validacao de ids

    while (true)
    {
        std::cout << "\nDigite o ID do vendedor: ";
        std::cin >> idFunc;
        try
        {
            int cont = 0;
            idFuncionario = std::stoi(idFunc, NULL, 10);

            for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
            {
                if (idFuncionario == listaVendedores[i].getId())
                {
                    cont++;
                }
            }
            if (cont == 0)
            {
                throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stoi")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }

    // acaba aqui o tratamento

    venda.setFuncionario(idFuncionario); // registrando na venda o id dos funcionarios

    // tratar a excessao da entrada

    std ::system("clear");

    std::cout << "----- CLIENTE -----\n";

    std::cout << "\nDigite o nome do cliente: ";
    std::cin.ignore();
    getline(std::cin, nomeCliente);
    venda.setNomeCliente(nomeCliente);
    std::cout << "\nDigite o CPF do cliente (Apenas numeros): ";
    std::getline(std::cin, documentoCliente);

    std ::system("clear");

    venda.setDocumentoCliente(documentoCliente);

    // produtos
addproduto:
    std::cout << "----- PRODUTOS -----";
    std::cout << "\nInsira os produtos no carrinho:\n";

    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        std::cout << "ID - " << Estoque::listaProdutos[i].getId() << std::endl;
        std::cout << "NOME - " << Estoque::listaProdutos[i].getNome() << std::endl;
        std::cout << "PRECO: R$" << std ::fixed << std ::setprecision(2) << Estoque::listaProdutos[i].getPreco() << std::setw(1) << std ::setfill('0') << "\n";
        std::cout << "---------------------\n";
    }
    // validando os ids
    std::cout << "\nPara fechar o carrinho digite -1\n";
    while (true)
    {
        while (true)
        {
            std::cout << "\nDigite o ID do produto: ";
            std::cin >> idProd;
            try
            {
                int cont = 0;
                idProduto = std::stoi(idProd, NULL, 10);

                if (idProduto == -1)
                {
                    if (comprou == 0)
                    {
                        std::cout << "\nERRO! Carrinho vazio. Venda cancelada\n";
                        sleep(1.5);
                        goto novavenda;
                    }
                    else
                        goto desconto;
                }

                for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
                {
                    if (idProduto == Estoque::listaProdutos[i].getId())
                    {
                        cont++;
                    }
                }
                if (cont == 0)
                {
                    throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
                }
            }
            catch (const std::invalid_argument &e)
            {
                if (std::string(e.what()) == "stoi")
                {
                    std::cerr << "Erro! Digite apenas numeros \n";
                }
                else
                    std::cerr << e.what();
                continue;
            }
            break;
        }

        while (true)
        {
            std::cout << "\nDigite a quantidade do produto: ";
            std::cin >> quant;
            try
            {
                quantidade = std::stoi(quant, NULL, 10);
                if (quantidade == -1)
                {
                    if (comprou == 0)
                    {
                        std::cout << "\nERRO! Carrinho vazio. Venda cancelada\n";
                        sleep(1.5);
                        goto novavenda;
                    }
                    else
                        goto desconto;
                }
                else if (quantidade <= 0)
                    throw std::invalid_argument("\nQuantidade invalida. Digite apenas numeros maiores que 0.\n");
            }
            catch (const std::invalid_argument &e)
            {
                if (std::string(e.what()) == "stoi")
                {
                    std::cerr << "Erro! Digite apenas numeros \n";
                }
                else
                    std::cerr << e.what();
                continue;
            }
            break;
        }

        for (int i = 0; i < Estoque::listaProdutos.size(); i++)
        {

            if (idProduto == Estoque::listaProdutos[i].getId())
            {
                // Consulta no estoque a quantidade de produtos
                if (Estoque::consultaEstoque(Estoque::listaProdutos[i]) > 0)
                {

                    if (Estoque::listaProdutos[i].getQuantidade() < quantidade)
                    {
                        std::cout << "\nErro! No momento ha somente " << Estoque::listaProdutos[i].getQuantidade() << " itens no estoque. Tente novamente!\n\n";
                        goto addproduto;
                    }
                    // adiciona o produto ao vector novo carrinho
                    else
                    {
                        for (int j = 0; j < listaProdutos.size(); j++)
                        {
                            if (idProduto == listaProdutos[j].getId())
                            {
                                Produto produto = listaProdutos[j];
                                ItemCarrinho item(produto, quantidade);
                                venda.novoCarrinho(item);
                                int inicial = Estoque::listaProdutos[j].getQuantidade();
                                quantidadeInicial.push_back(inicial);
                                produtosComprados.push_back(idProduto);
                                comprou++;
                            }
                        }
                        // tira 1 da quantidade do produto no estoque
                        quantidadeEstoque = Estoque::listaProdutos[i].getQuantidade() - quantidade;
                        Estoque::listaProdutos[i].setQuantidade(quantidadeEstoque);
                    }
                }
                else
                {
                    std::cout << "\nProduto fora de estoque!\n";
                }
            }
        }
    }

desconto:
    // tratar a excessao da entrada
    std ::system("clear");

    std::cout << "===== DESCONTO =====\n";

    while (true)
    {
        std::cout << "% Desconto (digite 0 para nenhum desconto): ";
        std::cin >> desc;
        try
        {
            desconto = stod(desc, NULL);
            if (desconto < 0 || desconto > 100)
            {
                throw std::invalid_argument("Erro! Desconto invalido, digite um valor entre 0 e 100. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stod")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }

    for (int i = 0; i < Vendas::carrinhoCompras.size(); i++)
    {
        total = total + Vendas::carrinhoCompras[i].getPreco();
    }

    valorTotal = total - (total * (desconto / 100.0));

    std ::system("clear");

    std::cout << "===== PAGAMENTO =====\n";
    std::cout << "Resumo de compras: \n";
    venda.imprimeCarrinho();

pagamento:
    std::cout << "Valor total: R$" << std ::fixed << std::setprecision(2) << valorTotal;
    std::cout << "\n\nPagamento efetuado?(s/n): ";
    std::cin >> resposta;

    venda.setValorTotal(valorTotal);

    // tratar a excessao da entrada

    if (resposta == 's' || resposta == 'S')
    {

        this->cadastrarItem(venda);

        for (int i = 0; i < listaVendedores.size(); i++)
        {
            if (idFuncionario == Gerencia::listaVendedores[i].getId())
            {
                listaVendedores[i].setTotalVendas(valorTotal);
            }
        }

        venda.deleteCarrinho();

        std::system("clear");

        std::cout << "Venda registrada com sucesso!\n";

        sleep(1.5);

        std::system("clear");
    }
    else if (resposta == 'n' || resposta == 'N')
    {
        if (comprou)
        {
            venda.deleteCarrinho();
        }
        std::system("clear");

        // retornando a quantidade de itens para o estoque

        for (int i = 0; i < Estoque::listaProdutos.size(); i++)
        {
            if (produtosComprados[i] == Estoque::listaProdutos[i].getId())
            {
                int quantidade = quantidadeInicial[i];
                Estoque::listaProdutos[i].setQuantidade(quantidade);
            }
        }

        std::cout << "Venda cancelada!\n";
        sleep(1.5);
        std ::system("clear");
    }
    else
    {
        std::system("clear");

        std::cout << "Entrada invalida, digite apenas: 's' ou 'n'.\n";
        sleep(2);
        std ::system("clear");
        goto pagamento;
    }
}

// IMPRESSAO DE VENDAS

void Gerencia::imprimeVendas()
{

    std::cout << "----- VENDAS REALIZADAS -----\n";

    // Percorrendo lista de vendas
    for (int i = 0; i < Gerencia::listaVendas.size(); i++)
    {

        // Imprimindo atributos da venda
        std::cout << "\nCLIENTE: \n\n";
        std::cout << "Nome: ";
        std::cout << Gerencia::listaVendas[i].getNomeCliente();
        std::cout << "\nDocumento: ";
        std::cout << Gerencia::listaVendas[i].getDocumentoCliente();
        std::cout << std::endl;
        std::cout << "\nId do vendedor: ";
        std::cout << Gerencia::listaVendas[i].getIdFuncionario();
        std::cout << std::endl;
        std::cout << "\nVALOR TOTAL: R$";
        std::cout << Gerencia::listaVendas[i].getValorTotal();
        std::cout << std::endl;
        std::cout << "---------------------------- \n";
    }
}

// FATURAMENTO
void Gerencia::relatorioFaturamento()
{
    int quantidadeVendas = 0;
    double faturamento = 0;
    double faturamentoTotal;
    for (int i = 0; i < Gerencia::listaVendas.size(); i++)
    {
        // Acrescentando valor das vendas ao montante faturamento
        faturamento = faturamento + Gerencia::listaVendas[i].getValorTotal();
        quantidadeVendas++;
    }

    faturamentoTotal = faturamento;

    std::cout << "---------------------- RELATORIO DE FATURAMENTOS ----------------------";
    if (quantidadeVendas == 1)
        std::cout << "\n\nFoi registrada 1 venda e resultou em um faturamento de R$ " << faturamentoTotal << ".\n";
    else
        std::cout << "\n\nForam registradas " << quantidadeVendas << " vendas e resultaram em um faturamento de R$ " << faturamentoTotal << ".\n";

    std::cout << "\n-----------------------------------------------------------------------\n";
}

// Funcao para adicao de novo vendedor
void Gerencia::novoVendedor(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    std::cout << "----- VENDEDOR -----\n";

    std::cout << "\nDigite o nome do vendedor: ";
    std::cin.ignore();
    getline(std::cin, nome);
    // tratar a excessao da entrada

    std::cout << "\nDigite o CPF do vendedor (Apenas numeros): ";
    std::cin >> documento;

    std::cout << "\nDigite o valor do salario por hora: ";
    std::cin >> salarioBase;

    std::cout << "\nDigite a quantidade de horas semanais: ";
    std::cin >> horasSemanais;

    this->cadastrarItem(Vendedor(nome, documento, porcentagemComissao, salarioBase, horasSemanais));

    std ::system("clear");

    std ::cout << "Vendedor cadastrado com sucesso!" << std ::endl;

    sleep(1.5);

    std ::system("clear");
}
// funcao para adicao de novo gerente
void Gerencia::novoGerente(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    std::cout << "----- GERENTE -----\n";

    std::cout << "\nDigite o nome do gerente: ";
    std::cin.ignore();
    getline(std::cin, nome);
    // tratar a excessao da entrada

    std::cout << "\nDigite o CPF do gerente (Apenas numeros): ";
    std::cin >> documento;

    std::cout << "\nDigite o valor do salario por hora: ";
    std::cin >> salarioBase;

    std::cout << "\nDigite a quantidade de horas semanais: ";
    std::cin >> horasSemanais;

    this->cadastrarItem(Gerente(nome, documento, porcentagemComissao, salarioBase, horasSemanais));

    std ::system("clear");

    std ::cout << "Gerente cadastrado com sucesso!" << std ::endl;

    sleep(1.5);

    std ::system("clear");
}

// EDITAR GERENTE

void Gerencia::editarGerente(int idFuncionario, std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    std::string idFunc;

    std::cout << " ----- EDITAR GERENTE ----- \n";
    // Listando gerentes
    for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaGerentes[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaGerentes[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }

    // validando os ids

    while (true)
    {
        std::cout << "Digite o id do gerente que voce deseja editar: ";
        std::cin >> idFunc;
        try
        {
            int cont = 0;
            idFuncionario = std::stoi(idFunc, NULL, 10);

            for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
            {
                if (idFuncionario == listaGerentes[i].getId())
                {
                    cont++;
                }
            }
            if (cont == 0)
            {
                throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stoi")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }

    std ::system("clear");

    for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
    {
        if (Gerencia::listaGerentes[i].getId() == idFuncionario)
        {
            // Selecao do dado que deseja modificar
            std :: string op;
            std::cout << "O que deseja editar? \n\n";
            std::cout << "1 - Nome\n";
            std::cout << "2 - Documento\n";
            std::cout << "3 - Porcentagem comissao\n";
            std::cout << "4 - Salario base (por hora)\n";
            std::cout << "5 - Horas semanais\n";

            excecao27:
            std:: cin >> op;
            try {

                    if ((isdigit(op[0]) && (op == "1" || op == "2" || op == "3" || op == "4" || op == "5"))==false)
                        throw op;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite um numero de 1 a 5.\n";
                    goto excecao27;
                }
            std ::system("clear");

            // edicao de nome
            if (op == "1")
            {
                std::cout << "Digite o novo nome: ";
                std::cin.ignore();
                getline(std::cin, nome);
                Gerencia::listaGerentes[i].setNome(nome);

                std ::system("clear");
            }

            // edicao de documento
            else if (op == "2")
            {
                std::cout << "Digite o novo documento: ";
                std::cin >> documento;
                Gerencia::listaGerentes[i].setDocumento(documento);

                std ::system("clear");
            }

            // edicao de percentual de comissao
            else if (op == "3")
            {
                std::cout << "Digite a nova porcentagem de comissao: ";
                std::cin >> porcentagemComissao;
                Gerencia::listaGerentes[i].setPorcentagemComissao(porcentagemComissao);

                std ::system("clear");
            }

            // edicao de salario base
            else if (op == "4")
            {
                std::cout << "Digite o novo salario base (por hora): ";
                std::cin >> salarioBase;
                Gerencia::listaGerentes[i].setSalarioBase(salarioBase);

                std ::system("clear");
            }

            // edicao de carga horaria semanal
            else if (op == "5")
            {
                std::cout << "Digite a nova quantidade de horas semanais: ";
                std::cin >> horasSemanais;
                Gerencia::listaGerentes[i].setHorasSemanais(horasSemanais);

                std ::system("clear");
            }
        }
    }
    std::cout << "Gerente editado com sucesso!\n";

    sleep(1.5);

    std ::system("clear");
}

// EDITAR VENDEDOR

void Gerencia::editarVendedor(int idFuncionario, std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    std::string idFunc;

    std::cout << " ----- EDITAR VENDEDOR ----- \n";
    // Listando vendedores
    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaVendedores[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaVendedores[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }

    // validando os ids

    while (true)
    {
        std::cout << "Digite o id do vendedor que voce deseja editar: ";
        std::cin >> idFunc;
        try
        {
            int cont = 0;
            idFuncionario = std::stoi(idFunc, NULL, 10);

            for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
            {
                if (idFuncionario == listaVendedores[i].getId())
                {
                    cont++;
                }
            }
            if (cont == 0)
            {
                throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stoi")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }

    std ::system("clear");

    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        if (Gerencia::listaVendedores[i].getId() == idFuncionario)
        {
            std::string op;
            std::cout << "O que deseja editar?: \n\n";
            std::cout << "1 - Nome\n";
            std::cout << "2 - Documento\n";
            std::cout << "3 - Porcentagem comissao\n";
            std::cout << "4 - Salario base (por hora)\n";
            std::cout << "5 - Horas semanais\n";
            
            excecao28:
            std:: cin >> op;
            try {

                    if ((isdigit(op[0]) && (op == "1" || op == "2" || op == "3" || op == "4" || op == "5"))==false)
                        throw op;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite um numero de 1 a 5.\n";
                    goto excecao28;
                }

            std ::system("clear");

            // edicao de nome
            if (op == "1")
            {
                std::cout << "Digite o novo nome: ";
                std::cin.ignore();
                getline(std::cin, nome);
                Gerencia::listaVendedores[i].setNome(nome);

                std ::system("clear");
            }

            // edicao de documento
            if (op == "2")
            {
                std::cout << "Digite o novo documento: ";
                std::cin >> documento;
                Gerencia::listaVendedores[i].setDocumento(documento);

                std ::system("clear");
            }

            // edicao de percentual de comissao
            if (op == "3")
            {
                std::cout << "Digite a nova porcentagem de comissao: ";
                std::cin >> porcentagemComissao;
                Gerencia::listaVendedores[i].setPorcentagemComissao(porcentagemComissao);

                std ::system("clear");
            }

            // edicao de salario base
            if (op == "4")
            {
                std::cout << "Digite o novo salario base (por hora): ";
                std::cin >> salarioBase;
                Gerencia::listaVendedores[i].setSalarioBase(salarioBase);

                std ::system("clear");
            }

            // edicao de carga horaria semanal
            if (op == "5")
            {
                std::cout << "Digite a nova quantidade de horas semanais: ";
                std::cin >> horasSemanais;
                Gerencia::listaVendedores[i].setHorasSemanais(horasSemanais);

                std ::system("clear");
            }
        }
    }
    std::cout << "Vendedor editado com sucesso!\n";

    sleep(1.5);

    std ::system("clear");
}

// FUNCOES DE ESTOQUE

// cadastro de novo produto

void Gerencia::novoProduto(std::string nomeProduto, double preco, int quantidade)
{
    // perguntando o nome, preco e quantidade do novo produto para cadastro

    bool condicao = 0;
    while (condicao == 0)
    {
        condicao = 1;
        std::cout << " ----- ADICIONAR PRODUTO ----- \n\n";
        std::cout << "Digite o nome do produto: ";
        std::cin.ignore();
        getline(std::cin, nomeProduto);
        std ::cout << std ::endl;
        std::cout << "Digite o preco do produto: ";
        std::cin >> preco;
        std ::cout << std ::endl;
        if (preco <= 0)
        {
            std::cout << "Erro! Nao ha como cadastrar produtos com preco menor ou igual a 0.00, tente novamente!" << std::endl;
            condicao = false;
            std::cout << std::endl;
        }

        if (condicao == 1)
        {
            std::cout << "Digite a quantidade do produto: ";
            std::cin >> quantidade;
            std ::cout << std ::endl;
            if (quantidade < 0)
            {
                std::cout << "Erro! Nao ha como cadastrar quantidade menor que zero, tente novamente!" << std::endl;
                condicao = false;
                std::cout << std::endl;
            }
        }
    }

    // chamando funcao do estoque para adcionar novo produto ao estoque

    Estoque::adicionarProduto(Produto(nomeProduto, preco, quantidade));
}

// imprime produtos do estoque com a quantidade

void Gerencia::imprimeProdutos()
{
    std::cout << " ----- ESTOQUE ----- \n";

    std::cout << "\nProdutos disponiveis no estoque: \n";
    std::cout << std::endl;

    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        std::cout << "ID: " << Estoque::listaProdutos[i].getId() << std::endl;
        std::cout << "NOME: " << Estoque::listaProdutos[i].getNome() << std::endl;
        std::cout << "QUANTIDADE: " << Estoque::listaProdutos[i].getQuantidade() << std::endl;
        std::cout << "PRECO: R$" << std ::fixed << std ::setprecision(2) << Estoque::listaProdutos[i].getPreco() << std::setw(1) << std ::setfill('0') << "\n";
        std::cout << "---------------------------- \n";
    }
}

// Edicao caracteristicas dos produtos, tais como nome, preco e quantidade

void Gerencia::editarEstoque(int idProduto, std::string nomeProduto, double preco, int quantidade)
{
    std::cout << " ----- EDITAR ESTOQUE ----- \n";
    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        std::cout << "ID - " << Estoque::listaProdutos[i].getId() << std::endl;
        std::cout << "NOME - " << Estoque::listaProdutos[i].getNome() << std::endl;
        std::cout << "PRECO: R$" << std ::fixed << std ::setprecision(2) << Estoque::listaProdutos[i].getPreco() << std::setw(1) << std ::setfill('0') << "\n";

        std::cout << "---------------------------\n";
    }

    // validando os ids
    std::string idProd;
    while (true)
    {
        std::cout << "Digite o id do produto que voce deseja editar: ";
        std::cin >> idProd;
        try
        {
            int cont = 0;
            idProduto = std::stoi(idProd, NULL, 10);

            for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
            {
                if (idProduto == listaVendedores[i].getId())
                {
                    cont++;
                }
            }
            if (cont == 0)
            {
                throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stoi")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }
    std ::system("clear");

    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        if (Estoque::listaProdutos[i].getId() == idProduto)
        {
            std:: string op;
            std::cout << "O que deseja editar? \n\n";
            std::cout << "1 - Nome\n";
            std::cout << "2 - Preco\n";
            std::cout << "3 - Adicionar mais unidades no estoque ";
            if (listaProdutos[i].getQuantidade() < 10 && listaProdutos[i].getQuantidade() > 0)
                std ::cout << "(Estoque em baixa. Apenas " << listaProdutos[i].getQuantidade() << " unidades restantes)." << std ::endl;
            else if (listaProdutos[i].getQuantidade() == 0)
                std ::cout << "(Produto esgotado)." << std ::endl;
            else
                std ::cout << "(" << listaProdutos[i].getQuantidade() << " unidades restantes)." << std ::endl;

            excecao29:
            std:: cin >> op;
            try {

                    if ((isdigit(op[0]) && (op == "1" || op == "2" || op == "3"))==false)
                        throw op;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite um numero de 1 a 3.\n";
                    goto excecao29;
                }
            

            std ::system("clear");

            // Edicao do nome
            if (op == "1")
            {
                std::cout << "Digite o novo nome: ";
                std::cin.ignore();
                getline(std::cin, nomeProduto);
                Estoque::listaProdutos[i].setNome(nomeProduto);

                std ::system("clear");
            }

            // Edicao do preco
            if (op == "2")
            {
                std::cout << "Preco atual: " << Estoque::listaProdutos[i].getPreco() << std::endl;
                while (true)
                {
                    std::cout << "\nDigite o novo preco: ";
                    std::cin >> preco;
                    Estoque::listaProdutos[i].setPreco(preco);
                    if (preco <= 0)
                    {
                        std::cout << "Erro! O preco nao pode ser menor ou igual a 0.00, tente novamente com outro valor" << std::endl;
                    }
                    else
                    {
                        break;
                    }
                }

                std ::system("clear");
            }

            // Edicao da quantidade
            if (op == "3")
            {
                int adicionarQuantidade;

                std::cout << "Quantidade atual: " << Estoque::listaProdutos[i].getQuantidade() << std::endl;

                std::cout << "\nDigite a quantidade que deseja adicionar: ";
                std::cin >> adicionarQuantidade;

                quantidade = adicionarQuantidade + Estoque::listaProdutos[i].getQuantidade();

                Estoque::listaProdutos[i].setQuantidade(quantidade);

                std ::system("clear");
            }
        }
    }
    std::cout << "Estoque editado com sucesso!\n";
}

// PAGAMENTO

void Gerencia::calculaPagamento(int idFuncionario, double horasSemanais, double horasExtras, double vendasTotais, double comissao, double salarioBase)
{

    double salario;
    std::string op;
    std::cout << " ----- NOVO PAGAMENTO ----- \n";
    std::cout << "\nVamos registrar um novo pagamento. Escolha abaixo o cargo do funcionario: \n";
    std::cout << "1 - Gerente\n";
    std::cout << "2 - Vendedor\n";

    excecao30:
    std::cin>>op;
    try {

        if ((isdigit(op[0]) && (op == "1" || op == "2"))==false)
            throw op;
    } catch (std::string str) {
            
        std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
        goto excecao30;
    }

    std ::system("clear");

    // se for gerente
    if (op == "1")
    {
        // imprime a lista de gerentes pro usuario escolher

        for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
        {
            std::cout << "ID - " << Gerencia::listaGerentes[i].getId() << std::endl;
            std::cout << "NOME - " << Gerencia::listaGerentes[i].getNome() << std::endl;
            std::cout << "---------------------\n";
        }
        // validando os ids

        std::string idFunc;
        while (true)
        {
            std::cout << "Digite o id do gerente: ";
            std::cin >> idFunc;
            try
            {
                int cont = 0;
                idFuncionario = std::stoi(idFunc, NULL, 10);

                for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
                {
                    if (idFuncionario == listaGerentes[i].getId())
                    {
                        cont++;
                    }
                }
                if (cont == 0)
                {
                    throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
                }
            }
            catch (const std::invalid_argument &e)
            {
                if (std::string(e.what()) == "stoi")
                {
                    std::cerr << "Erro! Digite apenas numeros \n";
                }
                else
                    std::cerr << e.what();
                continue;
            }
            break;
        }

        std ::system("clear");

        for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
        { // compara o id do funcionario com os ids da lista
            if (Gerencia::listaGerentes[i].getId() == idFuncionario)
            {
                // quando encontrar a posicao referente ao id
                horasSemanais = Gerencia::listaGerentes[i].getHorasSemanais();
                salarioBase = Gerencia::listaGerentes[i].getSalarioBase();
                vendasTotais = Gerencia::listaGerentes[i].getTotalVendas();
                comissao = Gerencia::listaGerentes[i].getPorcentagemComissao();

                std::cout << "Adicionar pagamento para o gerente " << Gerencia::listaGerentes[i].getNome() << ": ";
            }
        }
    }

    // se for vendedor
    else if (op == "2")
    {
        // imprime a lista de vendedores pro usuario escolher

        for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
        {
            std::cout << "ID - " << Gerencia::listaVendedores[i].getId() << std::endl;
            std::cout << "NOME - " << Gerencia::listaVendedores[i].getNome() << std::endl;
            std::cout << "---------------------\n";
        }

        std::string idFunc;
        while (true)
        {
            std::cout << "\nDigite o ID do vendedor: ";
            std::cin >> idFunc;
            try
            {
                int cont = 0;
                idFuncionario = std::stoi(idFunc, NULL, 10);

                for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
                {
                    if (idFuncionario == listaVendedores[i].getId())
                    {
                        cont++;
                    }
                }
                if (cont == 0)
                {
                    throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
                }
            }
            catch (const std::invalid_argument &e)
            {
                if (std::string(e.what()) == "stoi")
                {
                    std::cerr << "Erro! Digite apenas numeros \n";
                }
                else
                    std::cerr << e.what();
                continue;
            }
            break;
        }

        std ::system("clear");

        for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
        { // compara o id do funcionario com os ids da lista
            if (Gerencia::listaVendedores[i].getId() == idFuncionario)
            {
                horasSemanais = Gerencia::listaVendedores[i].getHorasSemanais();
                salarioBase = Gerencia::listaVendedores[i].getSalarioBase();
                vendasTotais = Gerencia::listaVendedores[i].getTotalVendas();
                comissao = Gerencia::listaVendedores[i].getPorcentagemComissao();

                std::cout << "Adicionar pagamento para o vendedor " << Gerencia::Gerencia::listaVendedores[i].getNome() << ": ";
            }
        }
    }

    std::cout << "\n\nHoras extras do funcionario: ";
    std::cin >> horasExtras;

    std ::system("clear");

    // calculo do salario mensal

    salario = (salarioBase) * ((horasSemanais * 4) + horasExtras) + (vendasTotais * (comissao / 100.0));

    // cria um novo pagamento dentro da lista de pagamentos

    this->novoPagamento(Pagamento(idFuncionario, salario));

    for (int i = 0; i < Gerencia::listaPagamentos.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaPagamentos[i].getFuncionario() << "\n";
        std::cout << "Valor recebido em R$: " << std::fixed << std::setprecision(2) << Gerencia::listaPagamentos[i].getPagamento() << std::setw(1) << std ::setfill('0') << "\n";
    }
}

// Impressao de pagamento

void Gerencia ::imprimePagamentos()
{
    std::cout << "----- RELATORIO DE PAGAMENTOS ----- \n";
    std::cout << std::endl;

    // Percorre toda a lista de pagamentos (por meio do "for") imprimindo eles

    for (int i = 0; i < Gerencia::listaPagamentos.size(); i++)
    {
        std ::cout << "ID - " << Gerencia::listaPagamentos[i].getFuncionario() << std ::endl;
        std ::cout << "NOME - ";

        // Percorre a lista de vendedores
        for (int j = 0; j < Gerencia::listaVendedores.size(); j++)
        {
            // Compara cada pagamento com cada vendedor para atribuir o pagamento correto ao vendedor correto
            if (Gerencia::listaPagamentos[i].getFuncionario() == Gerencia::listaVendedores[j].getId())
            {
                std::cout << Gerencia::listaVendedores[j].getNome() << std::endl;
            }
        }

        for (int j = 0; j < Gerencia::listaGerentes.size(); j++)
        {
            // Compara cada pagamento com cada gerente para atribuir o pagamento correto ao gerente correto
            if (Gerencia::listaPagamentos[i].getFuncionario() == Gerencia::listaGerentes[j].getId())
                std::cout
                    << Gerencia::listaGerentes[j].getNome() << std::endl;
        }

        std::cout << "Valor recebido em R$: " << std::fixed << std ::setprecision(2) << Gerencia::listaPagamentos[i].getPagamento() << std::setw(1) << std ::setfill('0') << std::endl;
        std::cout << "---------------------------- \n";
    }
}

void Gerencia::imprimeGerentes(int idGerente)
{
    std::cout << "----- VER INFORMACOES DE GERENTES -----\n";
    for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaGerentes[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaGerentes[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }
    std::string idFunc;

    while (true)
    {
        std::cout << "Digite o id do gerente que voce deseja ver: ";
        std::cin >> idFunc;
        try
        {
            int cont = 0;
            idGerente = std::stoi(idFunc, NULL, 10);

            for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
            {
                if (idGerente == listaGerentes[i].getId())
                {
                    cont++;
                }
            }
            if (cont == 0)
            {
                throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stoi")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }

    std ::system("clear");

    for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
    { // compara o id do funcionario com os ids da lista
        if (Gerencia::listaGerentes[i].getId() == idGerente)
        {
            std ::cout << "------- INFORMACOES DO GERENTE -------" << std ::endl;
            std::cout << "\nID: " << Gerencia::listaGerentes[i].getId() << std::endl;
            std::cout << "\nNome: " << Gerencia::listaGerentes[i].getNome() << std::endl;
            std::cout << "\nDocumento: " << Gerencia::listaGerentes[i].getDocumento() << std::endl;
            std::cout << "-------------------------------------\n\n";
        }
    }
}

void Gerencia::imprimeVendedores(int idVendedor)
{
    std::cout << "----- VER INFORMACOES DE VENDEDORES -----\n";
    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaVendedores[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaVendedores[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }

    std::string idFunc;

    while (true)
    {
        std::cout << "Digite o id do vendedor que voce deseja ver: ";
        std::cin >> idFunc;
        try
        {
            int cont = 0;
            idVendedor = std::stoi(idFunc, NULL, 10);

            for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
            {
                if (idVendedor == listaVendedores[i].getId())
                {
                    cont++;
                }
            }
            if (cont == 0)
            {
                throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stoi")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }

    std ::system("clear");

    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    { // compara o id do funcionario com os ids da lista
        if (Gerencia::listaVendedores[i].getId() == idVendedor)
        {
            std ::cout << "------- INFORMACOES DO VENDEDOR -------" << std ::endl;
            std::cout << "\nID: " << Gerencia::listaVendedores[i].getId() << std::endl;
            std::cout << "\nNome: " << Gerencia::listaVendedores[i].getNome() << std::endl;
            std::cout << "\nDocumento: " << Gerencia::listaVendedores[i].getDocumento() << std::endl;
            std::cout << "-------------------------------------\n\n";
        }
    }
}

// FUNCOES DE LEITURA DE LISTAS

const std::vector<Vendedor> &Gerencia::lerListaVendedores()
{
    return Gerencia::listaVendedores;
}

const std::vector<Gerente> &Gerencia::lerListaGerentes()
{
    return Gerencia::listaGerentes;
}

const std::vector<Pagamento> &Gerencia::lerListaPagamentos()
{
    return Gerencia::listaPagamentos;
}

const std::vector<Vendas> &Gerencia::lerListaVendas()
{
    return Gerencia::listaVendas;
}

// FUNÇÕES QUE CRIAM UM NOVO OBJETO - nao mexer

void Gerencia::cadastrarItem(const Vendedor &vendedor)
{
    Gerencia::listaVendedores.push_back(vendedor);
}

void Gerencia::cadastrarItem(const Gerente &gerente)
{
    Gerencia::listaGerentes.push_back(gerente);
}

void Gerencia::cadastrarItem(const Vendas &venda)
{
    Gerencia::listaVendas.push_back(venda);
}

void Gerencia::novoPagamento(const Pagamento &pagamento)
{
    Gerencia::listaPagamentos.push_back(pagamento);
}

void Gerencia::apagaProduto(int i)
{
    Estoque::listaProdutos.erase(listaProdutos.begin() + i);
}

void Gerencia::apagaVendedor(int i)
{
    Gerencia::listaVendedores.erase(listaVendedores.begin() + i);
}

void Gerencia::apagaGerente(int i)
{
    Gerencia::listaGerentes.erase(listaGerentes.begin() + i);
}

void Gerencia::removerGerente(int idGerente)
{
    std::cout << "----- REMOVER GERENTE ----- \n";
    for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaGerentes[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaGerentes[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }

    std::string idFunc;

    while (true)
    {
        std::cout << "Digite o id do gerente que deseja remover: ";
        std::cin >> idFunc;
        try
        {
            int cont = 0;
            idGerente = std::stoi(idFunc, NULL, 10);

            for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
            {
                if (idGerente == listaGerentes[i].getId())
                {
                    cont++;
                }
            }
            if (cont == 0)
            {
                throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stoi")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }

    for (int i = 0; i < Gerencia::listaGerentes.size(); i++)
    {
        if (idGerente == Gerencia::listaGerentes[i].getId())
        {
            Gerencia::apagaGerente(i);
            std::cout << "Gerente removido com sucesso! \n";
            sleep(1.5);
        }
    }
}

void Gerencia::removerVendedor(int idVendedor)
{
    std::cout << "----- REMOVER VENDEDOR ----- \n";
    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        std::cout << "ID - " << Gerencia::listaVendedores[i].getId() << std::endl;
        std::cout << "NOME - " << Gerencia::listaVendedores[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }
    std::string idFunc;
    while (true)
    {
        std::cout << "Digite o id do vendedor que deseja remover: ";
        std::cin >> idFunc;
        try
        {
            int cont = 0;
            idVendedor = std::stoi(idFunc, NULL, 10);

            for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
            {
                if (idVendedor == listaVendedores[i].getId())
                {
                    cont++;
                }
            }
            if (cont == 0)
            {
                throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stoi")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }

    for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
    {
        if (idVendedor == Gerencia::listaVendedores[i].getId())
        {
            Gerencia::apagaVendedor(i);
            std ::system("clear");
            std::cout << "Vendedor removido com sucesso! \n";
            sleep(1.5);
        }
    }
}

void Gerencia::removerProduto(int idProduto)
{
    std::cout << "----- REMOVER PRODUTO ----- \n";
    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        std::cout << "ID - " << Estoque::listaProdutos[i].getId() << std::endl;
        std::cout << "NOME - " << Estoque::listaProdutos[i].getNome() << std::endl;
        std::cout << "PRECO: R$" << std ::fixed << std ::setprecision(2) << Estoque::listaProdutos[i].getPreco() << std::setw(1) << std ::setfill('0') << "\n";

        std::cout << "---------------------\n";
    }
    
    // validando os ids
    std::string idProd;
    while (true)
    {
        std::cout << "Digite o id do produto que deseja remover: ";
        std::cin >> idProd;
        try
        {
            int cont = 0;
            idProduto = std::stoi(idProd, NULL, 10);

            for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
            {
                if (idProduto == listaVendedores[i].getId())
                {
                    cont++;
                }
            }
            if (cont == 0)
            {
                throw std::invalid_argument("Erro! ID invalido. Tente novamente: \n");
            }
        }
        catch (const std::invalid_argument &e)
        {
            if (std::string(e.what()) == "stoi")
            {
                std::cerr << "Erro! Digite apenas numeros \n";
            }
            else
                std::cerr << e.what();
            continue;
        }
        break;
    }

    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        if (idProduto == Estoque::listaProdutos[i].getId())
        {
            Gerencia::apagaProduto(i);
            std::cout << "Produto removido com sucesso! \n";
        }
    }
}

// destrutor
Gerencia::~Gerencia()
{
}