#ifndef VENDA_H
#define VENDA_H

#include <string>
#include "estoque/estoque.h"
#include "produto.h"
#include "vendedor.h"
#include "cliente.h"

class Venda
{
private:
    int generateIds;
    int id;            // contador que vai acumular a quantidade de vendas
    double valorTotal; // valor total da venda
    Vendedor vendedor;
    Produto idProduto;
    Cliente cliente;

public:
    Venda(double valorTotal, Vendedor vendedor, Produto idProduto, Cliente cliente);

    double setValorTotal();
    double getValorTotal();
    double getId();
    
    ~Venda();
};

#endif
