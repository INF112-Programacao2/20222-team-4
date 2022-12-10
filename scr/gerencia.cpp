#include "gerencia.h"
#include <iostream>

std::vector<Vendedor> Gerencia::listaVendedores = std::vector<Vendedor>();
std::vector<Gerente> Gerencia::listaGerentes = std::vector<Gerente>();
std::vector<Cliente> Gerencia::listaClientes = std::vector<Cliente>();
//std::vector<Venda> Gerencia::listaVendas = std::vector<Venda>();
std::vector<Produto> Gerencia::carrinhoCompras = std::vector<Produto>();

Gerencia::Gerencia() : Estoque ()
{
    this->cadastrarGerente(Gerente("Matheus", 6666666, 10, 1200.0, 46));
    this->cadastrarGerente(Gerente("Vitoria", 6666666, 10, 1200.0, 46));
    this->cadastrarGerente(Gerente("Rafael", 6666666, 10, 1200.0, 46));

    this->cadastrarVendedor(Vendedor("Bianca", 6666666, 10, 1200.0, 46));
    this->cadastrarVendedor(Vendedor("Julia", 6666666, 10, 1200.0, 46));
    this->cadastrarVendedor(Vendedor("Pedro", 6666666, 10, 1200.0, 46));
}

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

int Gerencia::buscarItem(Cliente cliente)
{
    for (int i = 0; i < Gerencia::listaClientes.size(); i++)
    {
        if (Gerencia::listaClientes[i].getId() == cliente.getId())
        {
            return i;
        }
    }

    return -1;
}

void Gerencia::selecionaFuncionario(int tipoFuncionario)
{
    int selecao;

    if (tipoFuncionario == 1)
    {
    }
    else
    {
    }
}

void Gerencia::cadastrarVendedor(const Vendedor &vendedor)
{
    Gerencia::listaVendedores.push_back(vendedor);
}

void Gerencia::cadastrarGerente(const Gerente &gerente)
{
    Gerencia::listaGerentes.push_back(gerente);
}

void Gerencia::cadastrarCliente(const Cliente &cliente)
{
    Gerencia::listaClientes.push_back(cliente);
}
/*
void Gerencia::cadastrarVenda(const Venda &venda)
{
    Gerencia::listaVendas.push_back(venda);
}
*/
void Gerencia::novoCarrinho(const Produto &produto)
{
    Gerencia::carrinhoCompras.push_back(produto);
}

void Gerencia::novaVenda(int idFuncionario, std::string nomeCliente, std::string documentoCliente, int idProduto, double desconto, double valorTotal)
{
    char resposta;
    double total = 0;

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
            if (idProduto==Estoque::listaProdutos[i].getId())
                this->novoCarrinho(Estoque::listaProdutos[i]);
        }
    }

    // tratar a excessao da entrada

    std::cout << "===== DESCONTO =====\n";
    std::cout << "% Desconto (digite 0 para nenhum desconto): \n";
    std::cin >> desconto;
    // tratar a excessao da entrada

    for (int i = 0; i < Gerencia::carrinhoCompras.size(); i++)
    {
        total = total + Gerencia::carrinhoCompras[i].getPreco();

    }


    valorTotal = total - (total * (desconto / 100));

    std::cout << "===== PAGAMENTO =====\n";
    std::cout << "Valor total: " << valorTotal;
    std::cout << "\nPagamento efetuado? (s/n) ";
    std::cin >> resposta;

    // tratar a excessao da entrada

    if (resposta == 's' || resposta == 'S')
    {
        /*
        for (int i = 0; i < Gerencia::listaVendedores.size(); i++)
        {
            if (Gerencia::listaVendedores[i].getId() == idFuncionario)
            {
                Vendedor vendedor = Gerencia::listaVendedores[i];
                this->cadastrarVenda(Venda(vendedor, nomeCliente, documentoCliente, valorTotal));
            }
        }
        */
        std::cout << "Venda registrada com sucesso!\n";
    }
    else
    {
        std::cout << "Venda cancelada!\n";
    }
}

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

void Gerencia::editarVendedor(const Vendedor &vendedor)
{
    int i = Gerencia::buscarItem(vendedor);
    Gerencia::listaVendedores[i] = vendedor;
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

    for (int i = 0; i < listaGerentes.size(); i++)
    {
        std::cout << "ID - " << listaGerentes[i].getId() << std::endl;
        std::cout << "NOME - " << listaGerentes[i].getNome() << std::endl;
        std::cout << "---------------------\n";
    }
}

void Gerencia::editarGerente(const Gerente &gerente)
{
    int i = Gerencia::buscarItem(gerente);
    Gerencia::listaGerentes[i] = gerente;
}

void Gerencia::editarCliente(const Cliente &cliente)
{
    int i = Gerencia::buscarItem(cliente);
    Gerencia::listaClientes[i] = cliente;
}

double Gerencia::calculaPagamento(Funcionario &funcionario)
{
    double salario;
    double horasSemanais, horasExtras, vendasTotais, comissao, salarioBase;

    horasSemanais = funcionario.getHorasSemanais();
    salarioBase = funcionario.getSalarioBase();
    vendasTotais = funcionario.getTotalVendas(); // falta colocar as vendas totais dentro da classe funcionario.

    std::cout << "Horas extras do funcionario: \n";
    std::cin >> horasExtras;
    std::cout << "Porcentagem de comissao do funcionario: \n";
    std::cin >> comissao;

    salario = salarioBase * (horasSemanais + horasExtras) + (vendasTotais * (comissao / 100.0));

    return salario;

    // colocar o funcionario + salario dentro de um objeto pagamento;
}

Gerencia::~Gerencia()
{
}