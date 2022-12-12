#include <vector>
#include <string>
#include "vendas.h"
#include "itemcarrinho.h"
#include "vendedor.h"
#include "gerente.h"
#include "produto.h"
#include "pagamento.h"
#include "estoque.h"
#include "pagamento.h"

class Gerencia : public Estoque
{
private:
    static std::vector<Vendedor> listaVendedores;   //lista de vendedores para guardar o cadastro dos vendedores e seus atributos
    static std::vector<Gerente> listaGerentes;      //lista de gerentes para guardar o cadastro dos gerentes e seus atributos
    static std::vector<Pagamento> listaPagamentos;  //lista para armazenar pagamentos dos funcionarios
    static std::vector<Vendas> listaVendas;         //lista para armazenar as vendas e os dados de cada venda

    // Prototipo de funcoes para buscar itens


public:
    Gerencia();

    // Prototipos das funcoes de cadastro de vendedor, gerente, venda, carrinho e pagamento que serao adcionados em suas respectivas listas
    void cadastrarVendedor(const Vendedor &vendedor);
    void cadastrarGerente(const Gerente &gerente);
    void cadastrarVenda(const Vendas &venda);
    void novoPagamento(const Pagamento &pagamento);
    void apagaProduto(int i);
    void apagaVendedor(int i);
    void apagaGerente(int i);

    void removerGerente(int idGerente);
    void removerVendedor(int idVendedor);
    void removerProduto(int idProduto);

    // Prototipo de funcoes de criar e editar cadastros
    void novaVenda(int idFuncionario, std::string nomeCliente, std::string documentoCliente, int idProduto, double desconto, double valorTotal);

    void editarVendedor(int idFuncionario, std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);

    void editarGerente(int idFuncionario, std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);

    void novoVendedor(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);

    void novoGerente(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);

    void novoProduto(std::string nomeProduto, double preco, int quantidade);

    void editarEstoque(int idProduto, std::string nomeProduto, double preco, int quantidade);

    // impressao de lista de produtos
    void imprimeProdutos();
    // impressao de lista de pagamentos
    void imprimeVendas();
    // relatorio do faturamento
    void relatorioFaturamento();
    //prototipo da funcao que calcula pagamento
    void calculaPagamento(int idFuncionario, double horasSemanais, double horasExtras, double vendasTotais, double comissao, double salarioBase); // vou fazer ainda
    // impressao de lista de pagamentos
    void imprimePagamentos();

    // lendo listas de vendedores, gerentes, pagamentos e vendas
    const std::vector<Vendedor> &lerListaVendedores();
    const std::vector<Gerente> &lerListaGerentes();
    const std::vector<Pagamento> &lerListaPagamentos();
    const std::vector<Vendas> &lerListaVendas();

    ~Gerencia();
};
