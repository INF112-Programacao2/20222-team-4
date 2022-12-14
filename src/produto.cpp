#include "produto.h"
// gerador de Ids
int Produto::generateIds = 1;

// construtor
Produto::Produto(std::string nomeProduto, double preco, int quantidade)
{
    this->nomeProduto = nomeProduto;
    this->preco = preco;
    this->quantidade = quantidade;
    this->id = Produto::generateIds;

    Produto::generateIds++;
}
// construtor
Produto::Produto()
{
}

// ----CADASTRO DE PRODUTO-----

// definindo nome do produto
void Produto::setNome(std::string nomeProduto)
{
    this->nomeProduto = nomeProduto;
}

// definindo preco do produto
void Produto::setPreco(double preco)
{
    this->preco = preco;
}

// definindo quantidade do produto
void Produto::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

// pegando nome do produto e retornando esse nome
std::string Produto::getNome()
{
    return this->nomeProduto;
}

// pegando preco do produto e retornando
double Produto::getPreco()
{
    return this->preco;
}

// pegando id do produto e retornando
int Produto::getId()
{
    return this->id;
}

// pegando quantidade do produto e retornando
int Produto::getQuantidade()
{
    return this->quantidade;
}

// destrutor
Produto::~Produto()
{
}
