#include "GerenciarFuncionarios.h"
#include <iostream>

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

void GerenciarFuncionarios::mostraFuncionarios (int numero){
    for (int i = 0; i < listaVendedores.size(); i++)
    {
        std::cout << "ID :" << GerenciarFuncionarios::listaVendedores[i].getMatricula() << std::endl;
        std::cout << "NOME: " << GerenciarFuncionarios::listaVendedores[i].getNome() << std::endl;
        std::cout << "-----------------------------\n\n";
    }
}

int GerenciarFuncionarios::buscarVendedor(Vendedor &vendedor)
{
    for (int i = 0; i < GerenciarFuncionarios::listaVendedores.size(); i++)
    {
        if (GerenciarFuncionarios::listaVendedores[i].getMatricula() == vendedor.getMatricula())
        {
            return i;
        }
    }

    return -1;
}
int GerenciarFuncionarios::buscarGerente(Gerente &gerente)
{
    for (int i = 0; i < GerenciarFuncionarios::listaGerentes.size(); i++)
    {
        if (GerenciarFuncionarios::listaGerentes[i].getMatricula() == gerente.getMatricula())
        {
            return i;
        }
    }

    return -1;
}

void GerenciarFuncionarios::updateVendedor(Vendedor &vendedor)
{
    int i = GerenciarFuncionarios::buscarVendedor(vendedor);
    GerenciarFuncionarios::listaVendedores[i] = vendedor;
}

void GerenciarFuncionarios::updateGerente(Gerente &gerente)
{
    int i = GerenciarFuncionarios::buscarGerente(gerente);
    GerenciarFuncionarios::listaGerentes[i] = gerente;
}


/*
void GerenciarFuncionarios::deleteGerente(Gerente &gerente)
{
    for (int i = 0; i < GerenciarFuncionarios::listaGerentes.size(); i++)
    {
        if (GerenciarFuncionarios::listaGerentes[i].getMatricula() == gerente.getMatricula())
        {
            GerenciarFuncionarios::listaGerentes.erase(i);
        }
    }
}
void GerenciarFuncionarios::deleteVendedor(Vendedor &vendedor)
{
    for (int i = 0; i < GerenciarFuncionarios::listaVendedores.size(); i++)
    {
        if (GerenciarFuncionarios::listaVendedores[i].getMatricula() == vendedor.getMatricula())
        {
            GerenciarFuncionarios::listaVendedores.erase(i);
        }
    }

}

double GerenciarFuncionarios::calculaPagamento(Funcionario &funcionario, Pagamento &pagamento)
{
    double salario;
    double horasSemanais, horasExtras, vendasTotais, comissao, salarioBase;

    horasSemanais = funcionario.getHorasSemanais();
    salarioBase = funcionario.getSalarioBase();
    vendasTotais = funcionario.getTotalVendas(); // falta colocar as vendas totais dentro da classe funcionario.

    std::cout << "Horas extras do funcionario: \n";
    std::cin >> horasExtras;
    std::cout << "Porcentagem de comissao do funcionario: \n";
    std::cin >> comissao;

    salario = salarioBase * (horasSemanais + horasExtras) + (vendasTotais * (comissao / 100.0));

    return salario;

    // colocar o funcionario + salario dentro de um objeto pagamento;
}
*/
GerenciarFuncionarios::~GerenciarFuncionarios()
{
}