#include <iostream>
#include <string>

#include "funcionario.h"
#include "estoque.h"
#include "produto.h"
#include "GerenciarFuncionarios.h"


// para compilar g++ **/**.cpp main.cpp

int main()
{
    Estoque estoque = Estoque();
    estoque.bancoDeDados();


login:
    // precisa fazer as funcoes de login e validacao...

inicio:

    int selecao;

    std::cout << "----- MENU INICIAL -----\n\n";
    std::cout << "1 - Registrar venda\n";
    std::cout << "2 - Cadastrar Cliente\n";
    std::cout << "3 - Gestao de funcionarios\n";
    std::cout << "4 - Gestao de vendas\n";
    std::cout << "5 - Gestao de financas\n";
    std::cout << "6 - Gestao de estoque\n";
    std::cout << "7 - Encerrar programa\n";
    std::cout << "Informe o numero: ";
    std::cin >> selecao;

    // tratar a excessao da entrada
    // tratar excessao dessa entrada!!
    // so pode entrar um numero int entre 1 e 7

    if (selecao == 1)
    {
        char resposta;
        double calculaDesconto,desconto;
        double valorTotal;
        int idVendedor, idCliente, idProduto;

        std::cout << "----- CADASTRO DE VENDAS -----\n";
        std::cout << "Vamos cadastrar uma nova venda!\n";
        std::cout << "Insira os dados abaixo: \n";
        std::cout << "----- VENDEDOR -----";



        std::cout << "Digite o ID do vendedor: \n";
        std::cin >> idVendedor;
        // tratar a excessao da entrada


        std::cout << "----- CLIENTE -----";


        std::cout << "\nDigite o ID do cliente: \n";
        std::cin >> idCliente;
        // tratar a excessao da entrada


        std::cout << "----- PRODUTOS -----";
        std::cout << "\nInsira os produtos no carrinho:\n";
        // ainda precisa consertar essa parte...
        // precisa fazer aparecer os produtos e adicionar dentro do carrinho...
        std::cout << "3 - Id do produto: \n";
        std::cin >> idProduto;
        // tratar a excessao da entrada

        std::cout << "===== DESCONTO =====\n";
        std::cout << "% Desconto (digite 0 para nenhum desconto): \n";
        std::cin >> desconto;
        // tratar a excessao da entrada

        

        std::cout << "===== PAGAMENTO =====\n";
        std::cout << "Valor total: " << valorTotal;
        std::cout << "Pagamento efetuado? (s/n)";
        std::cin >> resposta;

        // tratar a excessao da entrada

        if (resposta == 's' || resposta == 'S')
        {

            std::cout << "Venda registrada com sucesso!";
        }
        else
        {
            std::cout << "Venda cancelada!";
        }
        // nova venda
        // logo apos abre um menu
        // 1 - cadastrar outra venda
        // 2 - voltar ao menu goto inicio;
    }
    else if (selecao == 2)
    {
        std::string nome;
        long long int documento;
        std::cout << "----- CADASTRO DE CLIENTE -----\n";
        std::cout << "Nome do cliente: \n";
        std::getline(std::cin, nome);
        std::cout << "CPF ou CPNJ do cliente: \n";
        std::cin >> documento;
        // tratar entrada


        std::cout << "Cliente cadastrado com sucesso!";
        // cadastro clientes
        // logo apos abre um menu
        // 1 - cadastrar mais clientes
        // 2 - voltar ao menu goto inicio;
    }
    else if (selecao == 3)
    {
        int resp;

        std::cout << "----- GESTAO DE FUNCIONARIOS -----\n\n";
        std::cout << "1 - Cadastrar novo funcionario\n";
        std::cout << "2 - Editar Funcionario\n";
        std::cout << "3 - Remover Funcionario\n";
        std::cin >> resp;
        // menu de gestao de funcionarios
        // 1 - cadastrar novo funcionario - 1 - gerente 2- vendedor
        // 2 - editar funcionarios - 1 - gerente 2- vendedor
        // 3 - remover funcionarios - 1- gerente 2- vendedor
        // 4 - voltar ao menu goto inicio;
    }
    else if (selecao == 4)
    {
        // menu de gestao de vendas
        //  1 - editar alguma venda
        //  2 - cancelar venda
        //  3 - gerar relatorio de vendas
        //  4 - voltar ao menu goto inicio;
    }
    else if (selecao == 5)
    {
        // menu de gerenciar pagamentos
        //  1 - novo pagamento
        //  2 - ver pagamentos
        //  3 - gerar contracheque
        //  4 - voltar ao menu goto inicio;
    }
    else if (selecao == 6)
    {
        // menu de gestao de estoque
        // 1 - consultar estoque
        // 2 - adicionar item
        // 3 - remover item
        // 4 - editar item
        // 5 - voltar ao menu
    }
    else if (selecao == 7)
    {
        // sair do programa
        return 0;
    }

    return 0;
}