#include "GerenciarVendas.h"

GerenciarVendas::GerenciarVendas()
{
}
void GerenciarVendas::cadastrarVenda(const Venda &venda)
{
    GerenciarVendas::listaVendas.push_back(venda);
}

void buscarVendas(Venda &venda)
{
    for (int i = 0; i < GerenciarVendas::listaVendas.size(); i++)
    {
        if (GerenciarVendas::listaVendas[i].getId() == venda.getId())
        {
            return i;
        }
    }

    return -1;
}

void updateVendas(const Venda &venda)
{
    int i = GerenciarVendas::buscarVendas(venda);
    GerenciarVendas::listaVendas[i] = venda;
}


void cancelarVenda (const Venda &venda){
    for (int i = 0; i < GerenciarVendas::listaVendas.size(); i++)
    {
        if (GerenciarVendas::listaVendas[i].getId() == venda.getId())
        {
            GerenciarVendas::listaVendas.erase(i);
        }
    }
}

GerenciarVendas::~GerenciarVendas()
{
}
