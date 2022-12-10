#ifndef VENDA_H
#define VENDA_H

#include <vector>
#include <string>

#include "estoque.h"
#include "produto.h"
#include "gerencia.h"
#include "vendedor.h"


class Venda {
    private:

    static int generateIds;
    int id;
    Vendedor vendedor;
    std::string nomeCliente;
    long long int documentoCliente;
    double valorTotal;
    std::vector<Produto>carrinho;

    public:

    Venda(Vendedor vendedor, std::string nomeCliente, long long int documentoCliente, double valorTotal, std::vector<Produto>carrinho);

    int getId();
    double getValorTotal();
    std::vector<Produto> getProdutos();
    std::string getNomeCliente();
    std::string getNomeVendedor();
    
    ~Venda();

};
#endif