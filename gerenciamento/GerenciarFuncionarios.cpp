#include "GerenciarFuncionarios.h"

GerenciarFuncionarios::GerenciarFuncionarios()
{
}

void GerenciarFuncionarios::cadastrarGerente(const Gerente &gerente)
{
    GerenciarFuncionarios::listaGerentes.push_back(gerente);
}
void GerenciarFuncionarios::cadastrarVendedor(const Vendedor &vendedor)
{
    GerenciarFuncionarios::listaVendedores.push_back(vendedor);
}
void updateVendedor(const Vendedor &vendedor)
{
    int i = GerenciarFuncionarios::buscarVendedor(vendedor);
    GerenciarFuncionarios::listaVendedores[i] = vendedor;
}

void updateGerente(const Gerente &gerente)
{
    int i = GerenciarFuncionarios::buscarGerente(gerente);
    GerenciarFuncionarios::listaGerentes[i] = gerente;
}

void buscarVendedor(Vendedor &vendedor)
{
    for (int i = 0; i < GerenciarFuncionarios::listaVendedores.size(); i++)
    {
        if (GerenciarFuncionarios::listaVendedores[i].getId() == vendedor.getId())
        {
            return i;
        }
    }

    return -1;
}
void buscarGerente(Gerente &gerente)
{
    for (int i = 0; i < GerenciarFuncionarios::listaGerentes.size(); i++)
    {
        if (GerenciarFuncionarios::listaGerentes[i].getId() == gerente.getId())
        {
            return i;
        }
    }

    return -1;
}

double calculaPagamento(Funcionario funcionario)
{
    double salario;
    double horasSemanais, horasExtras, comissao, salarioBase;

    horasSemanais=funcionario.getHorasSemanais();
    salarioBase=funcionario.getSalarioBase();
    
    std::cout << "Horas extras do funcionario: ";
    std::cin >> horasExtras;
    

}
void realizaPagamento(Pagamento &pagamento)
{

}

GerenciarFuncionarios::~GerenciarFuncionarios()
{

}