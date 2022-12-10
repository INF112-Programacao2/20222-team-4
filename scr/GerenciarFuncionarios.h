#ifndef GERENCIARFUNCIONARIOS_H
#define GERENCIARFUNCIONARIOS_H

#include <vector>
#include <string>

#include "funcionario.h"
#include "gerente.h"
#include "vendedor.h"
//#include "pagamento.h"

class GerenciarFuncionarios
{

private:
    std::vector<Vendedor> listaVendedores;
    std::vector<Gerente> listaGerentes;
    //std::vector<Pagamento> listaPagamentos;

public:
    GerenciarFuncionarios();

    void cadastrarVendedor(const Vendedor &vendedor);
    void cadastrarGerente(const Gerente &gerente);

    void mostraFuncionarios(int numero);

    void updateVendedor( Vendedor &vendedor);
    void updateGerente( Gerente &gerente);
/*
    void deleteVendedor(Vendedor &vendedor); 
    void deleteGerente( Gerente &gerente);
*/
    //double calculaPagamento(Funcionario &funcionario, Pagamento &pagamento);
    int buscarVendedor(Vendedor &vendedor);
    int buscarGerente(Gerente &gerente);

    ~GerenciarFuncionarios();
};

#endif