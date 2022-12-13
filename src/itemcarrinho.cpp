
#include "itemcarrinho.h"

//construtor
ItemCarrinho::ItemCarrinho(Produto produto, int quantidade)
{
    this->produto = produto;
    this->quantidade = quantidade;
}

void ItemCarrinho::setProduto(Produto produto)
{
    this->produto = produto;
}

void ItemCarrinho::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

// pega o nome do item para adicionar ao carrinho e retorna o nome
std::string ItemCarrinho::getNome()
{
    return this->produto.getNome();
}

//pega a quantidade do item para adcionar ao carrinho e retorna a quantidade
int ItemCarrinho::getQuantidade()
{
    return this->quantidade;
}

// pega o preco e o retorna
double ItemCarrinho::getPreco()
{
    double preco = produto.getPreco();
    return preco * quantidade;
}

//destrutor
ItemCarrinho::~ItemCarrinho()
{
}
