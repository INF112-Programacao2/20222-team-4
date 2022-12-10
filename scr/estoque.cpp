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

int Estoque::consultaEstoque(Produto produto)
{

    int quantidade= produto.getQuantidade();

    if (quantidade == 0) {
        return -1;
    } else 
        return quantidade;
    
}

void Estoque::adicionarProduto(const Produto &produto)
{
    Estoque::listaProdutos.push_back(produto);
}

void Estoque::updateProduto(const Produto &produto)
{

}

Estoque::~Estoque()
{
}
