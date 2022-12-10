#include <iostream>
#include <string>

#include "funcionario.h"
#include "estoque.h"
#include "produto.h"
#include "gerencia.h"


// para compilar g++ cliente.cpp estoque.cpp funcionario.cpp gerencia.cpp gerente.cpp pagamento.cpp produto.cpp vendedor.cpp main.cpp

int main()
{
    Gerencia gerencia = Gerencia();
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

        double valorTotal,desconto;
        int idFuncionario, idProduto;
        std::string nomeCliente;
        std::string documentoCliente;

    
       gerencia.novaVenda(idFuncionario, nomeCliente, documentoCliente, idProduto, desconto, valorTotal);


       
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
        std::string nome; 
        long long int documento;
        double porcentagemComissao;
        double salarioBase;
        double horasSemanais;
        std::cout << "----- GESTAO DE FUNCIONARIOS -----\n\n";
        std::cout << "1 - Cadastrar novo funcionario\n";
        std::cout << "2 - Editar Funcionario\n";
        std::cout << "3 - Remover Funcionario\n";
        std::cin >> resp;

        if (resp==1) {
            gerencia.novoVendedor(nome, documento, porcentagemComissao, salarioBase, horasSemanais);
        }
        else if (resp==2) {



        }
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