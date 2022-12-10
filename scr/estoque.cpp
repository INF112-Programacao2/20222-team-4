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

bool Estoque::consultaEstoque(Produto produto)
{
     for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        if (Estoque::listaProdutos[i].getId() == produto.getId())
        {
            return true;
        }
    }
            return false;
}

void Estoque::adicionarProduto(const Produto &produto)
{
     Estoque::listaProdutos.push_back(produto);
}

int Estoque::buscarProduto(Produto produto)
{
    for (int i = 0; i < Estoque::listaProdutos.size(); i++)
    {
        if (Estoque::listaProdutos[i].getId() == produto.getId())
        {
            return i;
        }
    }

    return -1;
}

void Estoque::updateProduto(const Produto &produto)
{
    int i = Estoque::buscarProduto(produto);
    Estoque::listaProdutos[i] = produto;
}

void Estoque::deleteProduto(Produto &produto)
{
}

Estoque::~Estoque()
{
}
