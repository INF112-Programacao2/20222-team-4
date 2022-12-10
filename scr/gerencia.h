#include <vector>
#include <string>
#include "vendedor.h"
#include "gerente.h"
#include "produto.h"
#include "pagamento.h"
#include "estoque.h"

class Gerencia : public Estoque
{
private:
    static std::vector<Vendedor> listaVendedores;
    static std::vector<Gerente> listaGerentes;
    static std::vector<Produto> carrinhoCompras;
    // static std::vector<Pagamento> listaPagamentos;
    

    int buscarItem(Vendedor vendedor);
    int buscarItem(Gerente gerente);

    

public:
    Gerencia();

// nao mexer
    void cadastrarVendedor(const Vendedor &vendedor);
    void cadastrarGerente(const Gerente &gerente);
    void novoCarrinho (const Produto &produto);

// colocar aqui as funcoes
    void novaVenda(int idFuncionario, std::string nomeCliente, std::string documentoCliente, int idProduto, double desconto, double valorTotal);

    void editarVendedor(int idGerente, std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);

    void editarGerente(int idGerente, std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);

    void novoVendedor (std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);
    
    void novoGerente (std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);

    void novoProduto (std::string nomeProduto, double preco, int quantidade);

    void editarEstoque (int idProduto, std::string nomeProduto, double preco, int quantidade);

    double calculaPagamento(Funcionario &funcionario); // vou fazer ainda

    

    ~Gerencia();
};
