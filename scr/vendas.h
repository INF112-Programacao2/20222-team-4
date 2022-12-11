#ifndef VENDAS_H
#define VENDAS_H

#include <vector>
#include "produto.h"

class Vendas
{
private:
    double valorTotal;
    double faturamento;
    int quantidadeVendas;
    std::vector<Produto> carrinhoCompras;
    int idFuncionario;
    std::string nomeCliente;
    long long int documentoCliente;

public:
    // aplicando conceitos de polimorfismo
    Vendas(int idFuncionario, std::string nomeCliente, long long int documentoCliente, std::vector<Produto>carrinhoCompras, valorTotal);
    Vendas(int quantidadeVendas, double faturamento);

    double getValorTotal(double valorTotal);
    int getIdFuncionario(int idFuncionario);
    std::string getNomeCliente(std::string nomeCliente);
    std::vector<Produto> getCarrinhoCompras(std::vector<Produto>carrinhoCompras);
    int getQuantidadeVendas(int quantidadeVendas);
    double getFaturamento(double faturamento);

    ~Vendas();
};
#endif