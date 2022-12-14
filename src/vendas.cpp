
#include "vendas.h"

std::vector<ItemCarrinho> Vendas::carrinhoCompras = std::vector<ItemCarrinho>();

// construtor
Vendas::Vendas()
{
}
// construtor (atribui valores aos dados da classe)
Vendas::Vendas(int idFuncionario, std::string nomeCliente, std::string documentoCliente, std::vector<ItemCarrinho> carrinhoCompras, double valorTotal)
{
    this->idFuncionario = idFuncionario;
    this->nomeCliente = nomeCliente;
    this->documentoCliente = documentoCliente;
    this->carrinhoCompras = carrinhoCompras;
    this->valorTotal = valorTotal;
}

// define o funcionario envolvido na venda
void Vendas::setFuncionario(int idFuncionario)
{
    this->idFuncionario = idFuncionario;
}

// define o cliente envolvido na venda
void Vendas::setNomeCliente(std::string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

// define o documento do cliente envolvido
void Vendas::setDocumentoCliente(std::string documentoCliente)
{
    this->documentoCliente = documentoCliente;
}

// define valor total da venda
void Vendas::setValorTotal(double valorTotal)
{
    this->valorTotal = valorTotal;
}
// cria novo sistema de carrinho de produtos para compra
void Vendas::novoCarrinho(ItemCarrinho &itemCarrinho)
{
    this->carrinhoCompras.push_back(itemCarrinho);
}
// imprime produtos so carrinho

void Vendas::imprimeCarrinho()
{

    std::cout << "\n\n====== CARRINHO ======:\n";
    for (int i = 0; i < carrinhoCompras.size(); i++)
    {
        // imprime nome e quantidade dos produtos no carrinho
        std::cout << "PRODUTO: " << carrinhoCompras[i].getNome() << std::endl;
        std::cout << "QUANTIDADE: " << carrinhoCompras[i].getQuantidade() << std::endl;
        std::cout << "-------------------------------\n";
    }
}

void Vendas::deleteCarrinho()
{
    carrinhoCompras.clear();
}

// pega valor total da venda e retorna ele
double Vendas::getValorTotal()
{
    return this->valorTotal;
}

// pega funcionario envolvido na venda e retorna o id dele
int Vendas::getIdFuncionario()
{
    return this->idFuncionario;
}

// pega o cliente envolvido na venda e retorna o nome dele
std::string Vendas::getNomeCliente()
{
    return this->nomeCliente;
}

// pega documento do cliente envolvido e retorna o documento
std::string Vendas::getDocumentoCliente()
{
    return this->documentoCliente;
}

// destrutor
Vendas::~Vendas()
{
}
