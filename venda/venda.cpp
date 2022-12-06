#include "venda.h"

Venda::Venda() {}

int Venda::generateIds = 0;

Venda::Venda(Vendedor vendedor, Produto produto, Cliente cliente, double desconto)
{
    this->vendedor = vendedor;
    this->produto = produto;
    this->cliente = cliente;
    this->desconto = desconto;
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

double Venda::setDesconto(double desconto)
{
    this->desconto;
}

double Venda::getDesconto()
{
    return this->desconto;
}

Venda::~Venda()
{
}
