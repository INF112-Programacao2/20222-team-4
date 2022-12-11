
#include "vendas.h"

std::vector<ItemCarrinho> Vendas::carrinhoCompras = std::vector<ItemCarrinho>();

Vendas::Vendas()
{
}

Vendas::Vendas(int idFuncionario, std::string nomeCliente, std::string documentoCliente, std::vector<ItemCarrinho> carrinhoCompras, double valorTotal)
{
    this->idFuncionario = idFuncionario;
    this->nomeCliente = nomeCliente;
    this->documentoCliente = documentoCliente;
    this->carrinhoCompras = carrinhoCompras;
    this->valorTotal = valorTotal;
}

void Vendas::setFuncionario(int idFuncionario)
{
    this->idFuncionario = idFuncionario;
}

void Vendas::setNomeCliente(std::string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

void Vendas::setDocumentoCliente(std::string documentoCliente)
{
    this->documentoCliente = documentoCliente;
}

void Vendas::setValorTotal(double valorTotal)
{
    this->valorTotal = valorTotal;
}

void Vendas::novoCarrinho(ItemCarrinho &itemCarrinho)
{
    this->carrinhoCompras.push_back(itemCarrinho);
}

void Vendas::imprimeCarrinho()
{

    std::cout << "\n\n====== CARRINHO ======:\n";
    for (int i = 0; i < carrinhoCompras.size(); i++)
    {

        std::cout << "PRODUTO: "<< carrinhoCompras[i].getNome()<<std::endl;
        std::cout << "QUANTIDADE: " << carrinhoCompras[i].getQuantidade()<<std::endl;
        std::cout << "-------------------------------\n";
    }
}

double Vendas::getValorTotal()
{
    return this->valorTotal;
}

int Vendas::getIdFuncionario()
{
    return this->idFuncionario;
}

std::string Vendas::getNomeCliente()
{
    return this->nomeCliente;
}

std::string Vendas::getDocumentoCliente()
{
    return this->documentoCliente;
}


Vendas::~Vendas()
{
}
