
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
    double valorTotal;
    double faturamento;
    int quantidadeVendas;
    int idFuncionario;
    std::string nomeCliente;
    std::string documentoCliente;

public:
    // aplicando conceitos de polimorfismo
    Vendas();
    Vendas(int idFuncionario, std::string nomeCliente, std::string documentoCliente, std::vector<ItemCarrinho> carrinhoCompras, double valorTotal);

    void setFuncionario(int idFuncionario);
    void setNomeCliente(std::string nomeCliente);
    void setDocumentoCliente(std::string documentoCliente);
    void setValorTotal(double valorTotal);

    static std::vector<ItemCarrinho> carrinhoCompras;
    void imprimeCarrinho();
    void novoCarrinho(ItemCarrinho &itemCarrinho);
    double getValorTotal();
    int getIdFuncionario();
    std::string getNomeCliente();
    int getQuantidadeVendas();
    double getFaturamento();

    ~Vendas();
};
#endif