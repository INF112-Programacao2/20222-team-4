#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

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

    std::string selecao;

    std ::system("clear");

    std::cout << "Bem vindo(a) ao e-cart!\n\n";
    std::cout << "----- MENU INICIAL -----\n\n";
    std::cout << "1 - Registrar venda\n";
    std::cout << "2 - Gestao de funcionarios\n";
    std::cout << "3 - Gestao de vendas\n";
    std::cout << "4 - Gestao de financas\n";
    std::cout << "5 - Gestao de estoque\n";
    std::cout << "6 - Encerrar programa\n";
    std::cout << "\nInforme o numero: ";

    excecao1:
    std::cin >> selecao;

    //tratamento de excecoes
    try {

        if ((isdigit(selecao[0]) && (selecao == "1" || selecao == "2" || selecao == "3" || selecao == "4" || selecao == "5" || selecao == "6"))==false)
            throw selecao;
    } catch (std::string str) {
                
        std ::cout << "Entrada invalida. Digite um numero de 1 a 6.\n";
        std ::cout << "\nInforme o numero: ";
        goto excecao1;
    }
    
    std::system("clear");

    // Selecao da area do sistema que deseja acessar

    if (selecao == "1")
    {
    novaVenda:
        std ::string selecao2;

        double valorTotal, desconto;
        int idFuncionario, idProduto;
        std ::string nomeCliente;
        std ::string documentoCliente;

        gerencia.novaVenda(idFuncionario, nomeCliente, documentoCliente, idProduto, desconto, valorTotal);
        // novo menu para selecionar o que deseja fazer no sistema
        std ::cout << "O que deseja fazer agora?\n\n";
        std ::cout << "1 - Cadastrar outra venda\n";
        std ::cout << "2 - Voltar ao menu inicial\n";

        excecao2:
        std ::cin >> selecao2;
        //tratamento de excecoes
        try {

            if ((isdigit(selecao2[0]) && (selecao2 == "1" || selecao2 == "2"))==false)
                throw selecao2;
        } catch (std::string str) {
                    
            std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
            goto excecao2;
        }

        std ::system("clear");
        // opcao de executar novamente mesma acao ou retornar ao menu
        if (selecao2 == "1")
        {
            goto novaVenda;
        }
        else if (selecao2 == "2")
        {
            goto inicio;
        }
    }
    else if (selecao == "2")
    {
    // MENU DE FUNCIONARIOS
    menuFuncionarios:
        std ::string resp, resp2;
        std::string nome;
        long long int documento;
        double porcentagemComissao;
        double salarioBase;
        double horasSemanais;
        std::cout << "----- GESTAO DE FUNCIONARIOS -----\n\n";
        std::cout << "1 - Cadastrar novo funcionario\n";
        std::cout << "2 - Editar Funcionario\n";
        std::cout << "3 - Remover Funcionario\n";
        std::cout << "4 - Ver informacoes de funcionarios\n";
        std::cout << "5 - Voltar ao menu inicial\n";

        excecao3:
        std::cin >> resp;
        //tratamento de excecoes
        try {

            if ((isdigit(resp[0]) && (resp == "1" || resp == "2" || resp == "3" || resp == "4" || resp == "5"))==false)
                throw resp;
        } catch (std::string str) {
                    
            std ::cout << "Entrada invalida. Digite um numero de 1 a 5.\n";
            goto excecao3;
        }

        std ::system("clear");

        if (resp == "1")
        {
        cadastro:
            std ::cout << "Qual o cargo do funcionario que deseja cadastrar? \n\n";
            std ::cout << "1 - Gerente\n";
            std ::cout << "2 - Vendedor\n";

            excecao4:
            std ::cin >> resp2;
            //tratamento de excecoes
            try {

                if ((isdigit(resp2[0]) && (resp2 == "1" || resp2 == "2"))==false)
                    throw resp2;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                goto excecao4;
            }

            std ::system("clear");

            if (resp2 == "1")
            {
                std ::string selecao2;
                // chamando funcao para cadastrar gerente
                gerencia.novoGerente(nome, documento, porcentagemComissao, salarioBase, horasSemanais);

                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Cadastrar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";

                excecao5:
                std ::cin >> selecao2;
                //tratamento de excecoes
                try {

                    if ((isdigit(selecao2[0]) && (selecao2 == "1" || selecao2 == "2"))==false)
                        throw selecao2;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                    goto excecao5;
                }

                std ::system("clear");
                // opcao de executar novamente mesma acao ou retornar ao menu
                if (selecao2 == "1")
                {
                    goto cadastro;
                }
                else if (selecao2 == "2")
                {
                    goto menuFuncionarios;
                }
            }
            else if (resp2 == "2")
            {
                std ::string selecao2;
                // chamando funcao para cadastrar novo funcionario
                gerencia.novoVendedor(nome, documento, porcentagemComissao, salarioBase, horasSemanais);

                std ::system("clear");
                // opcao de executar novamente mesma acao ou retornar ao menu
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Cadastrar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";
                
                excecao6:
                std ::cin >> selecao2;
                //tratamento de excecoes
                try {

                    if ((isdigit(selecao2[0]) && (selecao2 == "1" || selecao2 == "2"))==false)
                        throw selecao2;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                    goto excecao6;
                }

                std ::system("clear");

                if (selecao2 == "1")
                {
                    goto cadastro;
                }
                else if (selecao2 == "2")
                {
                    goto menuFuncionarios;
                }
            }
        }

        else if (resp == "2")
        {
        editarFuncionario:
            // opcao de executar novamente mesma acao ou retornar ao menu
            std::cout << "Qual o cargo do funcionario que deseja editar? \n\n";
            std::cout << "1 - Gerente\n";
            std::cout << "2 - Vendedor\n";

            excecao7:
            std::cin >> resp2;
            //tratamento de excecoes
            try {

                if ((isdigit(resp2[0]) && (resp2 == "1" || resp2 == "2"))==false)
                    throw resp2;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                goto excecao7;
            }

            std ::system("clear");

            if (resp2 == "1")
            {
                std::string nome;
                int idGerente;
                long long int documento;
                double porcentagemComissao, salarioBase, horasSemanais;
                std ::string op;

                // chamando funcao para editar gerente
                gerencia.editarGerente(idGerente, nome, documento, porcentagemComissao, salarioBase, horasSemanais);
                // opcao de executar novamente mesma acao ou retornar ao menu
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Editar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";

                excecao8:
                std ::cin >> op;
                //tratamento de excecoes
                try {

                    if ((isdigit(op[0]) && (op == "1" || op == "2"))==false)
                        throw op;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                    goto excecao8;
                }

                std ::system("clear");

                if (op == "1")
                {
                    goto editarFuncionario;
                }
                else if (op == "2")
                {
                    goto menuFuncionarios;
                }
            }
            else if (resp2 == "2")
            {
                std::string nome;
                int idVendedor;
                long long int documento;
                double porcentagemComissao, salarioBase, horasSemanais;
                std ::string op;
                // chamando funcao para editar vendedor
                gerencia.editarVendedor(idVendedor, nome, documento, porcentagemComissao, salarioBase, horasSemanais);
                // opcao de executar novamente mesma acao ou retornar ao menu
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Editar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";

                excecao9:
                std ::cin >> op;
                //tratamento de excecoes
                try {

                    if ((isdigit(op[0]) && (op == "1" || op == "2"))==false)
                        throw op;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                    goto excecao9;
                }

                std ::system("clear");

                if (op == "1")
                {
                    goto editarFuncionario;
                }
                else if (op == "2")
                {
                    goto menuFuncionarios;
                }
            }
        }

        else if (resp == "3")
        {   
            // menu de escolha de remocao de funcionario
            menuremover:
            std::cout << "Qual o cargo do funcionario que deseja remover? \n\n";
            std::cout << "1 - Gerente\n";
            std::cout << "2 - Vendedor\n";

            excecao10:
            std::cin >> resp2;

            //tratamento de excecoes
            try {

                if ((isdigit(resp2[0]) && (resp2 == "1" || resp2 == "2"))==false)
                    throw resp2;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                goto excecao10;
            }

            std :: system("clear");

            if (resp2 == "1")
            {
                int idGerente;

                // chamando funcao para remover gerente
                gerencia.removerGerente(idGerente);

                std :: system("clear");

                std :: string op;
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Remover outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";

                excecao11:
                std ::cin >> op;
                //tratamento de excecoes
                try {

                    if ((isdigit(op[0]) && (op == "1" || op == "2"))==false)
                        throw op;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                    goto excecao11;
                }

                std ::system("clear");

                if (op == "1")
                {
                    goto menuremover;
                }
                else if (op == "2")
                {
                    goto menuFuncionarios;
                }


                
            }
            else if (resp2 == "2")
            {   
                int idVendedor;
                gerencia.removerVendedor(idVendedor);

                std :: system("clear");

                std :: string op;
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Remover outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";

                excecao12:
                std ::cin >> op;
                //tratamento de excecoes
                try {

                    if ((isdigit(op[0]) && (op == "1" || op == "2"))==false)
                        throw op;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                    goto excecao12;
                }

                std ::system("clear");

                if (op == "1")
                {
                    goto menuremover;
                }
                else if (op == "2")
                {
                    goto menuFuncionarios;
                }

            }
        }
        else if (resp == "4"){
            menuvisualizar:
            std ::cout << "Qual o cargo do funcionario que deseja visualizar as informacoes? \n\n";
            std ::cout << "1 - Gerente\n";
            std ::cout << "2 - Vendedor\n";

            excecao13:
            std ::cin >> resp2;
            //tratamento de excecoes
            try {

                if ((isdigit(resp2[0]) && (resp2 == "1" || resp2 == "2"))==false)
                    throw resp2;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                goto excecao13;
            }

            std ::system("clear");

            if (resp2 == "1") { 
                
                int idGerente;
                gerencia.imprimeGerentes(idGerente);
                std :: string op;
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Visualizar informacoes de outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";

                excecao14:
                std ::cin >> op;
                //tratamento de excecoes
                try {

                    if ((isdigit(op[0]) && (op == "1" || op == "2"))==false)
                        throw op;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                    goto excecao14;
                }

                std ::system("clear");

                if (op == "1")
                {
                    goto menuvisualizar;
                }
                else if (op == "2")
                {
                    goto menuFuncionarios;
                }
            }
            else if (resp2 == "2") {
                int idVendedor;
                gerencia.imprimeVendedores (idVendedor);
                std :: string op;
                std ::cout << "O que deseja fazer agora?\n\n";
                std ::cout << "1 - Visualizar informacoes de outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";

                excecao15:
                std ::cin >> op;
                //tratamento de excecoes
                try {

                    if ((isdigit(op[0]) && (op == "1" || op == "2"))==false)
                        throw op;
                } catch (std::string str) {
                            
                    std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                    goto excecao15;
                }

                std ::system("clear");

                if (op == "1")
                {
                    goto menuvisualizar;
                }
                else if (op == "2")
                {
                    goto menuFuncionarios;
                }
            }
        }
        else if (resp == "5")
        {
            goto inicio; // voltar ao menu inicial
        }
    }
    else if (selecao == "3")
    {
    gestaoVendas:

        std ::string resp3, op;
        // GESTAO DE VENDAS
        std::cout << "----- GESTAO DE VENDAS -----\n\n";
        std::cout << "1 - Listar vendas concluidas\n";
        std::cout << "2 - Gerar relatorio de faturamentos\n";
        std::cout << "3 - Voltar ao menu inicial\n";

        excecao16:
        std::cin >> resp3;
        //tratamento de excecoes
        try {

            if ((isdigit(resp3[0]) && (resp3 == "1" || resp3 == "2" || resp3 == "3"))==false)
                throw resp3;
        } catch (std::string str) {
                    
            std ::cout << "Entrada invalida. Digite um numero de 1 a 3.\n";
            goto excecao16;
        }

        std ::system("clear");

        if (resp3 == "1")
        { // chamando funcao para imprimir vendas
            gerencia.imprimeVendas();
            std ::cout << "\nDigite 1 para voltar ao menu anterior.\n\n";

            excecao17:
            std ::cin >> op;
            try {

                if ((isdigit(op[0]) && (op == "1"))==false)
                    throw op;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite 1 para voltar ao menu anterior.\n";
                goto excecao17;
            }

            std ::system("clear");
            // opcao de executar novamente mesma acao ou retornar ao menu
            if (op == "1")
            {
                goto gestaoVendas;
            }
        }

        else if (resp3 == "2")
        {
            std ::string op;
            // chamando funcao para fazer relatorio do faturamento
            gerencia.relatorioFaturamento();
            // opcao de executar novamente mesma acao ou retornar ao menu
            std ::cout << "\nDigite 1 para voltar ao menu anterior.\n\n";

            excecao18:
            std ::cin >> op;
            try {

                if ((isdigit(op[0]) && (op == "1"))==false)
                    throw op;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite 1 para voltar ao menu anterior.\n";
                goto excecao18;
            }

            std ::system("clear");

            if (op == "1")
            {
                goto gestaoVendas;
            }
        }
        else if (resp3 == "3")
        {
            goto inicio; // voltar ao menu inicial
        }
    }

    else if (selecao == "4")
    {
    menuPagamento:
        std ::string resp4;
        // MENU DE FINANCAS
        std::cout << "----- GESTAO DE FINANCAS -----\n\n";
        std::cout << "1 - Novo pagamento\n";
        std::cout << "2 - Ver pagamentos\n";
        std::cout << "3 - Voltar ao menu inicial\n";

        excecao19:
        std::cin >> resp4;
        //tratamento de excecoes
        try {

            if ((isdigit(resp4[0]) && (resp4 == "1" || resp4 == "2" || resp4 == "3"))==false)
                throw resp4;
        } catch (std::string str) {
                    
            std ::cout << "Entrada invalida. Digite um numero de 1 a 3.\n";
            goto excecao19;
        }

        std ::system("clear");

        if (resp4 == "1")
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

            // opcao de executar novamente mesma acao ou retornar ao menu
            std ::cout << "\nO que deseja fazer agora?\n\n";
            std ::cout << "1 - Realizar outro pagamento\n";
            std ::cout << "2 - Voltar ao menu anterior\n";

            std ::string comando3;

            excecao20:
            std::cin >> comando3;
            //tratamento de excecoes
            try {

                if ((isdigit(comando3[0]) && (comando3 == "1" || comando3 == "2"))==false)
                    throw comando3;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                goto excecao20;
            }

            std ::system("clear");

            if (comando3 == "1")
            {
                goto pagar;
            }

            if (comando3 == "2")
            {
                goto menuPagamento;
            }
        }
        else if (resp4 == "2")
        {
            std ::string op;
            // chamando funcao para imprimir pagamento
            gerencia.imprimePagamentos();

            std ::cout << "Digite 1 para voltar ao menu anterior.\n\n";

            excecao21:
            std ::cin >> op;
            try {

                if ((isdigit(op[0]) && (op == "1"))==false)
                    throw op;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite 1 para voltar ao menu anterior.\n";
                goto excecao21;
            }

            std ::system("clear");
            // opcao de executar novamente mesma acao ou retornar ao menu
            if (op == "1")
            {
                goto menuPagamento;
            }
        }

        else if (resp4 == "3")
        {
            goto inicio; // voltar ao menu inicial
        }
    }
    else if (selecao == "5")
    {
    menuEstoque:
        std ::string resp5;
        // menu de gestao do estoque
        std::cout << "----- GESTAO DE ESTOQUE -----\n\n";
        std::cout << "1 - Consultar estoque\n";
        std::cout << "2 - Adicionar produto\n";
        std::cout << "3 - Remover produto\n";
        std::cout << "4 - Editar produto\n";
        std::cout << "5 - Voltar ao menu inicial\n";

        excecao22:
        std::cin >> resp5;
        //tratamento de excecoes
        try {

            if ((isdigit(resp5[0]) && (resp5 == "1" || resp5 == "2" || resp5 == "3" || resp5 == "4" || resp5 == "5"))==false)
                throw resp5;
        } catch (std::string str) {
                    
            std ::cout << "Entrada invalida. Digite um numero de 1 a 5.\n";
            goto excecao22;
        }

        std ::system("clear");

        if (resp5 == "1")
        {
            std ::string op;
            // chamando funcao que imprime produtos
            gerencia.imprimeProdutos();

            std ::cout << "Digite 1 para voltar ao menu anterior.\n\n";

            excecao23:
            std ::cin >> op;
            try {

                if ((isdigit(op[0]) && (op == "1"))==false)
                    throw op;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite 1 para voltar ao menu anterior.\n";
                goto excecao23;
            }

            std ::system("clear");
            // opcao de executar novamente mesma acao ou retornar ao menu
            if (op == "1")
            {
                goto menuEstoque;
            }
        }
        else if (resp5 == "2")
        {
        addProduto:

            std::string nomeProduto;
            double preco;
            int quantidade;
            // chamando funcao para adcionar novo produto
            gerencia.novoProduto(nomeProduto, preco, quantidade);

            std ::system("clear");
            // opcao de executar novamente mesma acao ou retornar ao menu
            std ::cout << "O que deseja fazer agora?\n\n";
            std ::cout << "1 - Adicionar outro produto\n";
            std ::cout << "2 - Voltar ao menu anterior\n";
            std ::string comando;

            excecao24:
            std::cin >> comando;
            //tratamento de excecoes
            try {

                if ((isdigit(comando[0]) && (comando == "1" || comando == "2"))==false)
                    throw comando;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                goto excecao24;
            }

            std ::system("clear");

            if (comando == "1")
            {
                goto addProduto;
            }
            else if (comando == "2")
            {
                goto menuEstoque;
            }
        }
        else if (resp5 == "3")  
        {   menuremoverprod:
            int idProduto;
            gerencia.removerProduto(idProduto);

            std :: system("clear");
                        
            std ::cout << "O que deseja fazer agora?\n\n";
            std ::cout << "1 - Remover outro produto\n";
            std ::cout << "2 - Voltar ao menu anterior\n";
            std ::string comando;

            excecao25:
            std ::cin >> comando;
            //tratamento de excecoes
            try {

                if ((isdigit(comando[0]) && (comando == "1" || comando == "2"))==false)
                    throw comando;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                goto excecao25;
            }

            std ::system("clear");

            if (comando == "1")
            {
                goto menuremoverprod;
            }
            else if (comando == "2")
            {
                goto menuEstoque;
            }

        }

        else if (resp5 == "4")
        {
        editProd:
            // edicao de produto
            int idProduto;
            std::string nomeProduto;
            double preco;
            int quantidade;
            // chamando funcao editar produto
            gerencia.editarEstoque(idProduto, nomeProduto, preco, quantidade);

            std ::system("clear");
            // opcao de executar novamente mesma acao ou retornar ao menu
            std ::cout << "O que deseja fazer agora?\n\n";
            std ::cout << "1 - Editar outro produto\n";
            std ::cout << "2 - Voltar ao menu anterior\n";
            std ::string comando;

            excecao26:
            std ::cin >> comando;
            //tratamento de excecoes
            try {

                if ((isdigit(comando[0]) && (comando == "1" || comando == "2"))==false)
                    throw comando;
            } catch (std::string str) {
                        
                std ::cout << "Entrada invalida. Digite os numeros 1 ou 2\n";
                goto excecao26;
            }

            std ::system("clear");

            if (comando == "1")
            {
                goto editProd;
            }
            else if (comando == "2")
            {
                goto menuEstoque;
            }
        }

        else if (resp5 == "5")
        {
            goto inicio; // voltar ao menu inicial
        }
    }
    else if (selecao == "6")
    {
        // sair do programa
        return 0;
    }

    return 0;
}