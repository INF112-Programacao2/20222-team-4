
#include "itemcarrinho.h"

ItemCarrinho::ItemCarrinho(Produto produto, int quantidade)
{
    this->produto = produto;
    this->quantidade = quantidade;
}

std::string ItemCarrinho::getNome()
{
    return this->produto.getNome();
}

int ItemCarrinho::getQuantidade()
{
    return this->quantidade;
}

double ItemCarrinho::getPreco()
{
    double preco = produto.getPreco();
    return preco * quantidade;
}

ItemCarrinho::~ItemCarrinho()
{
}
