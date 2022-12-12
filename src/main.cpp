#include <iostream>
#include <string>
#include <exception>

// headers files
#include "funcionario.h"
#include "estoque.h"
#include "produto.h"
#include "vendas.h"
#include "gerencia.h"

// para compilar g++ estoque.cpp funcionario.cpp gerencia.cpp gerente.cpp pagamento.cpp produto.cpp vendedor.cpp main.cpp
// mostrar só os erros:
// g++ estoque.cpp funcionario.cpp gerencia.cpp gerente.cpp pagamento.cpp produto.cpp vendedor.cpp vendas.cpp itemcarrinho.cpp main.cpp -Wfatal-errors

int main()
{
    Gerencia gerencia = Gerencia();
    Estoque estoque = Estoque();
    estoque.bancoDeDados();

login:
    // precisa fazer as funcoes de login e validacao...

inicio:

    // SISTEMA DE MENU
    // Opcoes de caminhos no sistema

    int selecao;

    std ::system("CLS");

    std::cout << "Bem vindo(a) ao e-cart!\n\n";
    std::cout << "----- MENU INICIAL -----\n\n";
    std::cout << "1 - Registrar venda\n";
    std::cout << "2 - Gestao de funcionarios\n";
    std::cout << "3 - Gestao de vendas\n";
    std::cout << "4 - Gestao de financas\n";
    std::cout << "5 - Gestao de estoque\n";
    std::cout << "6 - Encerrar programa\n";
    std::cout << "\nInforme o numero: ";
    std::cin >> selecao;

    std::system("CLS");

    // tratar a excessao da entrada
    // tratar excessao dessa entrada!!
    // so pode entrar um numero int entre 1 e 7


    //Selecao da area do sistema que deseja acessar


    if (selecao == 1)
    {
    novaVenda:
        int selecao2;

        double valorTotal, desconto;
        int idFuncionario, idProduto;
        std ::string nomeCliente;
        std ::string documentoCliente;

        gerencia.novaVenda(idFuncionario, nomeCliente, documentoCliente, idProduto, desconto, valorTotal);
        // novo menu para selecionar o que deseja fazer no sistema
        std ::cout << "O que deseja fazer agora?\n\n";
        std ::cout << "1 - Cadastrar outra venda\n";
        std ::cout << "2 - Voltar ao menu inicial\n";
        std ::cin >> selecao2;

        std ::system("CLS");
        //opcao de executar novamente mesma acao ou retornar ao menu
        if (selecao2 == 1)
        {
            goto novaVenda;
        }
        else if (selecao2 == 2)
        {
            goto inicio;
        }
    }
    else if (selecao == 2)
    {
    // MENU DE FUNCIONARIOS
    menuFuncionarios:
        int resp, resp2;
        std::string nome;
        long long int documento;
        double porcentagemComissao;
        double salarioBase;
        double horasSemanais;
        std::cout << "----- GESTAO DE FUNCIONARIOS -----\n\n";
        std::cout << "1 - Cadastrar novo funcionario\n";
        std::cout << "2 - Editar Funcionario\n";
        std::cout << "3 - Remover Funcionario\n";
        std::cout << "4 - Voltar ao menu inicial\n";
        std::cin >> resp;

        std ::system("CLS");

        if (resp == 1)
        {
        cadastro:
            std ::cout << "Qual o cargo do funcionario que deseja cadastrar? \n\n";
            std ::cout << "1 - Gerente\n";
            std ::cout << "2 - Vendedor\n";
            std ::cin >> resp2;

            std ::system("CLS");

            if (resp2 == 1)
            {
                int selecao2;
                //chamando funcao para cadastrar gerente
                gerencia.novoGerente(nome, documento, porcentagemComissao, salarioBase, horasSemanais);

                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Cadastrar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";
                std ::cin >> selecao2;

                std ::system("CLS");
                //opcao de executar novamente mesma acao ou retornar ao menu
                if (selecao2 == 1)
                {
                    goto cadastro;
                }
                else if (selecao2 == 2)
                {
                    goto menuFuncionarios;
                }
            }
            else if (resp2 == 2)
            {
                int selecao2;
                // chamando funcao para cadastrar novo funcionario
                gerencia.novoVendedor(nome, documento, porcentagemComissao, salarioBase, horasSemanais);

                std ::system("CLS");
                //opcao de executar novamente mesma acao ou retornar ao menu
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Cadastrar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";
                std ::cin >> selecao2;

                std ::system("CLS");

                if (selecao2 == 1)
                {
                    goto cadastro;
                }
                else if (selecao2 == 2)
                {
                    goto menuFuncionarios;
                }
            }
        }

        else if (resp == 2)
        {
editarFuncionario:
            //opcao de executar novamente mesma acao ou retornar ao menu
            std::cout << "Qual o cargo do funcionario que deseja editar? \n\n";
            std::cout << "1 - Gerente\n";
            std::cout << "2 - Vendedor\n";
            std::cin >> resp2;

            std ::system("CLS");

            if (resp2 == 1)
            {
                std::string nome;
                int idGerente;
                long long int documento;
                double porcentagemComissao, salarioBase, horasSemanais;
                int op;

                //chamando funcao para editar gerente
                gerencia.editarGerente(idGerente, nome, documento, porcentagemComissao, salarioBase, horasSemanais);
                //opcao de executar novamente mesma acao ou retornar ao menu
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Editar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";
                std ::cin >> op;

                std ::system("CLS");

                if (op == 1)
                {
                    goto editarFuncionario;
                }
                else if (op == 2)
                {
                    goto menuFuncionarios;
                }
            }
            else if (resp2 == 2)
            {
                std::string nome;
                int idVendedor;
                long long int documento;
                double porcentagemComissao, salarioBase, horasSemanais;
                int op;
                //chamando funcao para editar vendedor
                gerencia.editarVendedor(idVendedor, nome, documento, porcentagemComissao, salarioBase, horasSemanais);
                //opcao de executar novamente mesma acao ou retornar ao menu
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Editar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";
                std ::cin >> op;

                std ::system("CLS");

                if (op == 1)
                {
                    goto editarFuncionario;
                }
                else if (op == 2)
                {
                    goto menuFuncionarios;
                }
            }
        }

        else if (resp == 3) // deixar por ultimo, mt dificil
        {
            // menu de escolha de remocao de funcionario
            std::cout << "Qual o cargo do funcionario que deseja remover? \n\n";
            std::cout << "1 - Gerente\n";
            std::cout << "2 - Vendedor\n";
            std::cin >> resp2;

            if (resp2 == 1)
            {
                // gerencia.removerGerente(nome, documento, porcentagemComissao, salarioBase, horasSemanais);
            }
            else if (resp2 == 2)
            {
                // gerencia.removerVendedor(nome, documento, porcentagemComissao, salarioBase, horasSemanais);
            }
        }

        else if (resp == 4)
        {
            goto inicio; // voltar ao menu inicial
        }
    }
    else if (selecao == 3)
    {
    gestaoVendas:

        int resp3;
        int op;
        // GESTAO DE VENDAS
        std::cout << "----- GESTAO DE VENDAS -----\n\n";
        std::cout << "1 - Listar vendas concluidas\n";
        std::cout << "2 - Gerar relatorio de faturamentos\n";
        std::cout << "3 - Voltar ao menu inicial\n";
        std::cin >> resp3;

        std ::system("CLS");

        if (resp3 == 1)
        {   //chamando funcao para imprimir vendas
            gerencia.imprimeVendas();
            std ::cout << "\nO que deseja fazer agora?\n\n";
            std ::cout << "1 - Voltar ao menu anterior\n";
            std ::cin >> op;

            std ::system("CLS");
            //opcao de executar novamente mesma acao ou retornar ao menu
            if (op == 1)
            {
                goto gestaoVendas;
            }
        }

        else if (resp3 == 2)
        {
            int op;
            // chamando funcao para fazer relatorio do faturamento
            gerencia.relatorioFaturamento();
            //opcao de executar novamente mesma acao ou retornar ao menu
            std ::cout << "\nO que deseja fazer agora?\n\n";
            std ::cout << "1 - Voltar ao menu anterior\n";
            std ::cin >> op;

            std ::system("CLS");

            if (op == 1)
            {
                goto gestaoVendas;
            }
        }
        else if (resp3 == 3)
        {
            goto inicio; // voltar ao menu inicial
        }
    }

    else if (selecao == 4)
    {
    menuPagamento:
        int resp4;
        // MENU DE FINANCIAS
        std::cout << "----- GESTAO DE FINANCAS -----\n\n";
        std::cout << "1 - Novo pagamento\n";
        std::cout << "2 - Ver pagamentos\n";
        std::cout << "3 - Voltar ao menu inicial\n";
        std::cin >> resp4;

        std ::system("CLS");

        if (resp4 == 1)
        {
        pagar:
            int idFuncionario;
            double horasSemanais;
            double horasExtras;
            double vendasTotais;
            double comissao;
            double salarioBase;
            // chamando funcao que calcula pagamento
            gerencia.calculaPagamento(idFuncionario, horasSemanais, horasExtras, vendasTotais, comissao, salarioBase);

            //opcao de executar novamente mesma acao ou retornar ao menu
            std ::cout << "\nO que deseja fazer agora?\n\n";
            std ::cout << "1 - Realizar outro pagamento\n";
            std ::cout << "2 - Voltar ao menu anterior\n";

            int comando3;
            std::cin >> comando3;

            std ::system("CLS");

            if (comando3 == 1)
            {
                goto pagar;
            }

            if (comando3 == 2)
            {
                goto menuPagamento;
            }
        }
        else if (resp4 == 2)
        {
            int op;
            // chamando funcao para imprimir pagamento
            gerencia.imprimePagamentos(); 

            std ::cout << "O que deseja fazer agora?\n\n";
            std ::cout << "1 - Voltar ao menu anterior\n";
            std ::cin >> op;

            std ::system("CLS");
            //opcao de executar novamente mesma acao ou retornar ao menu
            if (op == 1)
            {
                goto menuPagamento;
            }
        }

        else if (resp4 == 3)
        {
            goto inicio; // voltar ao menu inicial
        }
    }
    else if (selecao == 5)
    {
    menuEstoque:
        int resp5;
        // menu de gestao do estoque
        std::cout << "----- GESTAO DE ESTOQUE -----\n\n";
        std::cout << "1 - Consultar estoque\n";
        std::cout << "2 - Adicionar item\n";
        std::cout << "3 - Remover item\n";
        std::cout << "4 - Editar item\n";
        std::cout << "5 - Voltar ao menu inicial\n";
        std::cin >> resp5;

        std ::system("CLS");

        if (resp5 == 1)
        {
            int op;
            //chamando funcao que imprime produtos
            gerencia.imprimeProdutos();

            std ::cout << "O que deseja fazer agora?\n\n";
            std ::cout << "1 - Voltar ao menu anterior \n";
            std ::cin >> op;

            std ::system("CLS");
            //opcao de executar novamente mesma acao ou retornar ao menu
            if (op == 1)    
            {
                goto menuEstoque;
            }
        }
        else if (resp5 == 2)
        {
        addProduto:

            std::string nomeProduto;
            double preco;
            int quantidade;
            // chamando funcao para adcionar novo produto
            gerencia.novoProduto(nomeProduto, preco, quantidade);

            std ::system("CLS");
            //opcao de executar novamente mesma acao ou retornar ao menu
            std ::cout << "O que deseja fazer agora?\n\n";
            std ::cout << "1 - Adicionar outro produto\n";
            std ::cout << "2 - Voltar ao menu anterior\n";
            int comando;
            std::cin >> comando;

            std ::system("CLS");

            if (comando == 1)
            {
                goto addProduto;
            }
            else if (comando == 2)
            {
                goto menuEstoque;
            }
        }
        else if (resp5 == 3) // deixar pra fazer por ultimo
        {
            // remover produto;
            
        }

        else if (resp5 == 4)
        {
        editProd:
            // edicao de produto
            int idProduto;
            std::string nomeProduto;
            double preco;
            int quantidade;
            //chamando funcao editar produto
            gerencia.editarEstoque(idProduto, nomeProduto, preco, quantidade);

            std ::system("CLS");
            //opcao de executar novamente mesma acao ou retornar ao menu
            std ::cout << "O que deseja fazer agora?\n\n";
            std ::cout << "1 - Editar outro item\n";
            std ::cout << "2 - Voltar ao menu anterior\n";
            int comando;
            std ::cin >> comando;

            std ::system("CLS");

            if (comando == 1)
            {
                goto editProd;
            }
            else if (comando == 2)
            {
                goto menuEstoque;
            }
        }

        else if (resp5 == 5)
        {
            goto inicio; // voltar ao menu inicial
        }
    }
    else if (selecao == 6)
    {
        // sair do programa
        return 0;
    }

    return 0;
}