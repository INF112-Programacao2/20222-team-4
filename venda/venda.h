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
    double desconto;

public:
    Venda(Vendedor vendedor, Produto idProduto, Cliente cliente, double desconto);

    double setValorTotal();
    double setDesconto();
    double getValorTotal();
    double getDesconto();
    double getId();
    
    ~Venda();
};

#endif
