
#ifndef VENDAS_H
#define VENDAS_H

#include <iostream>
#include <vector>
#include <string>
#include "produto.h"
#include "itemcarrinho.h"

class Vendas
{
private:
    double valorTotal;          // valor total da venda
    int idFuncionario;          //id do funcionario da venda
    std::string nomeCliente;        //nome do cliente
    std::string documentoCliente;   //documento do cliente

public:
    // aplicando conceitos de polimorfismo
    // construtores
    Vendas();
    Vendas(int idFuncionario, std::string nomeCliente, std::string documentoCliente, std::vector<ItemCarrinho> carrinhoCompras, double valorTotal);

    // definindo dados (id do funcionario envolvido, nome e documento do cliente e valor da venda)
    void setFuncionario(int idFuncionario);
    void setNomeCliente(std::string nomeCliente);
    void setDocumentoCliente(std::string documentoCliente);
    void setValorTotal(double valorTotal);

    static std::vector<ItemCarrinho> carrinhoCompras;
    void imprimeCarrinho();                             // imprimindo itens do carrinho
    void novoCarrinho(ItemCarrinho &itemCarrinho);      // prototipo da funcao adcionar novos item ao carrinho

    // retornando valor dos dados da venda previamente definidos (valor total, id do funcionario, nome e documento do cliente)
    double getValorTotal();
    int getIdFuncionario();
    std::string getNomeCliente();
    std::string getDocumentoCliente();

// destrutor
    ~Vendas();
};
#endif