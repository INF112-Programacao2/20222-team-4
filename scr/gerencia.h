#include <vector>
#include <string>
#include "vendedor.h"
#include "gerente.h"
#include "produto.h"
#include "pagamento.h"
#include "cliente.h"
#include "estoque.h"

class Gerencia : public Estoque
{
private:
    static std::vector<Vendedor> listaVendedores;
    static std::vector<Gerente> listaGerentes;
    static std::vector<Cliente> listaClientes;
    static std::vector<Produto> carrinhoCompras;
    // static std::vector<Pagamento> listaPagamentos;
    

    int buscarItem(Vendedor vendedor);
    int buscarItem(Gerente gerente);
    int buscarItem(Cliente cliente);

    

public:
    Gerencia();

    void cadastrarVendedor(const Vendedor &vendedor);
    void cadastrarGerente(const Gerente &gerente);
    void cadastrarCliente(const Cliente &cliente);
    void novoCarrinho (const Produto &produto);

    void novaVenda(int idFuncionario, std::string nomeCliente, std::string documentoCliente, int idProduto, double desconto, double valorTotal);

    static void selecionaFuncionario(int tipoFuncionario);

    void editarVendedor(const Vendedor &vendedor);
    void editarGerente(const Gerente &gerente);
    void editarCliente(const Cliente &cliente);

    double calculaPagamento(Funcionario &funcionario);

    void novoVendedor (std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);
    
    void novoGerente (std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);

    ~Gerencia();
};
