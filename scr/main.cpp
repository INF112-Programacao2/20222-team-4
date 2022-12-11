#include <iostream>
#include <string>
#include "funcionario.h"
#include "estoque.h"
#include "produto.h"
#include "gerencia.h"

// para compilar g++ estoque.cpp funcionario.cpp gerencia.cpp gerente.cpp pagamento.cpp produto.cpp vendedor.cpp main.cpp
// mostrar só os erros:
// g++ estoque.cpp funcionario.cpp gerencia.cpp gerente.cpp pagamento.cpp produto.cpp vendedor.cpp main.cpp -Wfatal-errors

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
    std::cout << "2 - Gestao de funcionarios\n";
    std::cout << "3 - Gestao de vendas\n";
    std::cout << "4 - Gestao de financas\n";
    std::cout << "5 - Gestao de estoque\n";
    std::cout << "6 - Encerrar programa\n";
    std::cout << "\nInforme o numero: ";
    std::cin >> selecao;

    // tratar a excessao da entrada
    // tratar excessao dessa entrada!!
    // so pode entrar um numero int entre 1 e 7

    if (selecao == 1)
    {
    venda:
        int selecao2;

        double valorTotal, desconto;
        int idFuncionario, idProduto;
        std ::string nomeCliente;
        std ::string documentoCliente;

        gerencia.novaVenda(idFuncionario, nomeCliente, documentoCliente, idProduto, desconto, valorTotal);

        std ::cout << "\nO que deseja fazer agora?\n";
        std ::cout << "1 - Cadastrar outra venda\n";
        std ::cout << "2 - Voltar ao menu inicial\n";
        std ::cin >> selecao2;

        std ::system("CLS");

        if (selecao2 == 1)
        {
            goto venda;
        }
        else if (selecao2 == 2)
        {
            goto inicio;
        }
    }
    else if (selecao == 2)
    {   
        menuFuncionarios:
        int resp, resp2;
        std::string nome;
        long long int documento;
        double porcentagemComissao;
        double salarioBase;
        double horasSemanais;
        std::cout << "\n----- GESTAO DE FUNCIONARIOS -----\n\n";
        std::cout << "1 - Cadastrar novo funcionario\n";
        std::cout << "2 - Editar Funcionario\n";
        std::cout << "3 - Remover Funcionario\n";
        std::cout << "4 - Voltar ao menu inicial\n";
        std::cin >> resp;

        if (resp == 1)
        {
            cadastro:
            std ::cout << "Qual o cargo do funcionario que deseja cadastrar? \n\n";
            std ::cout << "1 - Gerente\n";
            std ::cout << "2 - Vendedor\n";
            std ::cin >> resp2;

            if (resp2 == 1)
            {   
                int selecao2;
                gerencia.novoGerente(nome, documento, porcentagemComissao, salarioBase, horasSemanais);

                std ::cout << "\nO que deseja fazer agora?\n\n";
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
            else if (resp2 == 2)
            {
                int selecao2;
                gerencia.novoVendedor(nome, documento, porcentagemComissao, salarioBase, horasSemanais);

                std ::cout << "\nO que deseja fazer agora?\n\n";
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
        editar:
            // editarfunc
            std::cout << "\nQual o cargo do funcionario que deseja editar? \n\n";
            std::cout << "1 - Gerente\n";
            std::cout << "2 - Vendedor\n";
            std::cin >> resp2;

            if (resp2 == 1)
            {   
                std::string nome;
                int idGerente;
                long long int documento;
                double porcentagemComissao, salarioBase, horasSemanais;
                int op;

                gerencia.editarGerente(idGerente, nome, documento, porcentagemComissao, salarioBase, horasSemanais);

                std ::cout << "\nO que deseja fazer agora?\n";
                std ::cout << "1 - Editar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";
                std ::cin >> op;

                std ::system("CLS");

                if (op == 1)
                {
                    goto editar;
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

                gerencia.editarVendedor(idVendedor, nome, documento, porcentagemComissao, salarioBase, horasSemanais);

                std ::cout << "\nO que deseja fazer agora?\n";
                std ::cout << "1 - Editar outro funcionario\n";
                std ::cout << "2 - Voltar ao menu anterior\n";
                std ::cin >> op;

                std ::system("CLS");

                if (op == 1)
                {
                    goto editar;
                }
                else if (op == 2)
                {
                    goto menuFuncionarios;
                }

            }
        }

        else if (resp == 3) // deixar por ultimo, mt dificil
        {
            // removerfunc
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
    else if (selecao == 3) // vitoria vai fazer
    {
        int resp3;

        std::cout << "\n----- GESTAO DE VENDAS -----\n\n";
        std::cout << "1 - Editar venda\n";
        std::cout << "2 - Cancelar venda\n";
        std::cout << "3 - Gerar relatorio de vendas\n";
        std::cout << "4 - Voltar ao menu inicial\n";
        std::cin >> resp3;

        if (resp3 == 1)
        {
            // editar alguma venda
        }
        else if (resp3 == 2)
        {
            // cancelar alguma venda
        }
        else if (resp3 == 3)
        {
            // gerar relatorio de vendas
        }
        else if (resp3 == 4)
        {
            goto inicio; // voltar ao menu inicial
        }
    }
    else if (selecao == 4)
    {   
        menuPagamento:
        int resp4;

        std::cout << "\n----- GESTAO DE FINANCAS -----\n\n";
        std::cout << "1 - Novo pagamento\n";
        std::cout << "2 - Ver pagamentos\n";
        std::cout << "3 - Voltar ao menu inicial\n";
        std::cin >> resp4;

        if (resp4 == 1)
        {
            int idFuncionario;
            double horasSemanais;
            double horasExtras;
            double vendasTotais;
            double comissao;
            double salarioBase;
            gerencia.calculaPagamento(idFuncionario, horasSemanais,horasExtras,vendasTotais,comissao,salarioBase);

            std::cout << std::endl;
            std::cout << "Digite 1 para voltar ao menu anterior: " << std::endl;
            int comando3;
            std::cin >> comando3;
            std::cout << std::endl;

            if(comando3==1){
                goto menuPagamento;
            }
        }
        else if (resp4 == 2)
        {            
            gerencia.imprimePagamentos();

            std::cout << std::endl;
            std::cout << "Digite 1 para voltar ao menu anterior: " << std::endl;
            int comando;
            std::cin >> comando;
            std::cout << std::endl;

            if(comando==1){
                goto menuPagamento;
            }
        }
            //fazer uma funcao parecida com a ver itens no estoque, só que puxando a lista de pagamentos e mostrando o id do funcionario escolhido e o nome dele e o total que ele recebeu
        
        else if (resp4 == 3)
        {
            goto inicio; // voltar ao menu inicial
        }
    }
    else if (selecao == 5)
    {
        menuEstoque:
        int resp5;

        std::cout << "\n----- GESTAO DE ESTOQUE -----\n\n";
        std::cout << "1 - Consultar estoque\n";
        std::cout << "2 - Adicionar item\n";
        std::cout << "3 - Remover item\n";
        std::cout << "4 - Editar item\n";
        std::cout << "5 - Voltar ao menu inicial\n";
        std::cin >> resp5;

        if (resp5 == 1)
        {
            //fazer um for que percorre o vector dos produtos e imprimir todos eles junto com o id e a quantidade
            
            // Estoque::listaProdutos[i].getId();
            // Estoque::listaProdutos[i]. getQuantidade();

            //uma opcao pra pessoa voltar ao menu, pq a consulta e so ver oq tem e a quantidade

        
            gerencia.imprimeProdutos();

            std::cout << std::endl;
            std::cout << "Digite 1 para voltar ao menu anterior: " << std::endl;
            int comando;
            std::cin >> comando;
            std::cout << std::endl;

            if(comando==1){
                goto menuEstoque;
            }
        }
        else if (resp5 == 2)
        {
            // adicionar item
            //gerencia.novoItem(passar os parametros);
            //funcao novoItem, ja prototipei ela, falta chamar e construir;
            // a funcao recebe nome, quantidade, preco;

            std::string nomeProduto;
            double preco;
            int quantidade;
            gerencia.novoProduto(nomeProduto, preco, quantidade);

            std::cout << "Digite 1 para voltar ao menu anterior: " << std::endl;
            int comando;
            std::cin >> comando;
            std::cout << std::endl;

            if(comando==1){
                goto menuEstoque;
            }

        }
        else if (resp5 == 3)  // deixar pra fazer por ultimo
        {
            // remover item
            // estoque.removerProduto(); //criar funcao e ver oq recebe
            std::cout << std::endl;
            std::cout << "Digite 1 para voltar ao menu anterior: " << std::endl;
            int comando;
            std::cin >> comando;
            std::cout << std::endl;

            if(comando==1){
                goto menuEstoque;
            }
        }

        else if (resp5 == 4)
        {
            // editar item
            //gerencia.editarEstoque(passar os parametros),  a funcao ja esta pronta, e so literalmente chamar ela aqui
            int idProduto;
            std::string nomeProduto;
            double preco;
            int quantidade;
            gerencia.editarEstoque(idProduto, nomeProduto, preco, quantidade);
            std::cout << std::endl;
            std::cout << "Digite 1 para voltar ao menu anterior: " << std::endl;
            int comando;
            std::cin >> comando;
            std::cout << std::endl;

            if(comando==1){
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