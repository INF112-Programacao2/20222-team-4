#include "estoque.h"

// lista de produtos
std::vector<Produto> Estoque::listaProdutos = std::vector<Produto>();

// construtor
Estoque::Estoque()
{
}

void Estoque::bancoDeDados()
{
    // banco de dados fake para ter alguns produtos pre cadastrados...
    //  nome, preco e quantidade
    this->adicionarProduto(Produto("Camisa Cruzeiro Home 22/23", 149.90, 60));
    this->adicionarProduto(Produto("Camisa Atletico MG Away 22/23", 149.90, 20));
    this->adicionarProduto(Produto("Camisa Brasil Away 22/23", 149.90, 0));
}

const std::vector<Produto> &Estoque::lerListaProdutos()
{
    return Estoque::listaProdutos;
}

// funcao para consultar quantidade de determinado produto no estoque
int Estoque::consultaEstoque(Produto produto)
{

    int quantidade = produto.getQuantidade();

    if (quantidade == 0)
    {
        return -1;
    }
    else
        return quantidade;
}

// funcao para adcionar produto na lista de produtos/estoque
void Estoque::adicionarProduto(const Produto &produto)
{
    Estoque::listaProdutos.push_back(produto);
}

// destrutor
Estoque::~Estoque()
{
}
