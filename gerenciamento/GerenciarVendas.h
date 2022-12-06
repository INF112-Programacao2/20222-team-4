#ifndef GERENCIARVENDAS_H
#define GERENCIARVENDAS_H

#include <vector>

#include "funcionario.h"
#include "estoque.h"
#include "produto.h"
#include "gerente.h"
#include "vendedor.h"
#include "pagamento.h"
#include "venda.h"

class GerenciarVendas
{

private:
    std::vector<Venda> listaVendas;

public:
    GerenciarVendas();

    void cadastrarVenda(Venda &venda);

    void updateVenda(Venda &venda);

    void cancelaVenda(Venda &venda);


    ~GerenciarVendas();
}

#endif