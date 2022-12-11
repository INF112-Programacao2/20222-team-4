#include "vendas.h"

Vendas::Vendas(int idFuncionario, std::string nomeCliente, long long int documentoCliente, std::vector<Produto> carrinhoCompras, valorTotal)
{
    this->idFuncionario = idFuncionario;
    this->nomeCliente = nomeCliente;
    this->documentoCliente = documentoCliente;
    this->carrinhoCompras = carrinhoCompras;
    this->valorTotal = valorTotal;
}

Vendas::Vendas(int quantidadeVendas, double valo)
{

}

double Vendas::getValorTotal(double valorTotal)
{
}

int Vendas::getIdFuncionario(int idFuncionario)
{
}

std::string Vendas::getNomeCliente(std::string nomeCliente)
{
}

std::vector<Produto> Vendas::getCarrinhoCompras(std::vector<Produto> carrinhoCompras)
{
    return std::vector<Produto>();
}

int Vendas::getQuantidadeVendas(int quantidadeVendas)
{
}

double Vendas::getFaturamento(double faturamento)
{
}

Vendas::~Vendas()
{
}
