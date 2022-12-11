#include "produto.h"

int Produto::generateIds = 1;
Produto::Produto(std::string nomeProduto, double preco, int quantidade)
{
    this->nomeProduto = nomeProduto;
    this->preco = preco;
    this->quantidade = quantidade;
    this-> id = Produto::generateIds;

    Produto::generateIds++;
}

Produto::Produto()
{
}

void Produto::setNome(std::string nomeProduto)
{
    this->nomeProduto = nomeProduto;
}

void Produto::setPreco(double preco)
{
    this->preco = preco;
}

void Produto::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

std::string Produto::getNome()
{
    return this->nomeProduto;
}

double Produto::getPreco()
{
    return this->preco;
}

int Produto::getId()
{
    return this->id;
}

int Produto::getQuantidade()
{
    return this->quantidade;
}

Produto::~Produto()
{
}
