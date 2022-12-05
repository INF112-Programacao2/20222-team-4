#include "venda.h"

Venda::Venda() {}

int Venda::generateIds = 0;

Venda::Venda(double valorTotal, Vendedor vendedor, Produto produto, Cliente cliente)
{
    this->valorTotal = valorTotal;
    this->vendedor = vendedor;
    this->produto = produto;
    this->cliente = cliente;
    this->id = Venda::generateIds;

    Venda::generateIds++;
}

double Venda::getValorTotal()
{
    return this->valorTotal;
}
int Venda::getId()
{
    return this->id;
}

double Venda::setValorTotal(double valorTotal)
{
    this->valorTotal;
}

Venda::~Venda()
{
}
