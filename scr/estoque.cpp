#include "estoque.h"

// lista de produtos
std::vector<Produto> Estoque::listaProdutos = std::vector<Produto>();

Estoque::Estoque()
{
}

void Estoque::bancoDeDados()
{
    // banco de dados fake para ter alguns produtos pre cadastrados...
    //  nome, preco e quantidade
    this->adicionarProduto(Produto("Camisa Cruzeiro Home 22/23", 149.90, 60));
    this->adicionarProduto(Produto("Camisa Cruzeiro Away 22/23", 149.90, 20));


}

void Estoque::consultaEstoque(Produto produto)
{
}

void Estoque::adicionarProduto(const Produto &produto)
{
}

void Estoque::updateProduto(const Produto &produto)
{
}

void Estoque::deleteProduto(Produto &produto)
{
}

Estoque::~Estoque()
{
}
