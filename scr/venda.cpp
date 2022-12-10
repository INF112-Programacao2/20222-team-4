#include "venda.h"

int Venda::generateIds = 1;
Venda::Venda(Vendedor vendedor, std::string nomeCliente, long long int documentoCliente, double valorTotal, std::vector<Produto> carrinho)
{
    this->vendedor = vendedor;
    this->nomeCliente = nomeCliente;
    this->documentoCliente = documentoCliente;
    this->valorTotal=valorTotal;
    this->carrinho=carrinho;
    this->id = Venda::generateIds;

    Venda::generateIds++;
}

int Venda::getId()
{
    return this->id;
}

double Venda::getValorTotal()
{
    return this->valorTotal;
}

std::vector<Produto> Venda::getProdutos()
{
    return this carrinho;
}

std::string Venda::getNomeCliente()
{
    return this->nomeCliente;
}

std::string Venda::getNomeVendedor()
{
    return this->vendedor.getNome();
}

Venda::~Venda()
{
}
