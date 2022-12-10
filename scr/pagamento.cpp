

#include "pagamento.h"

Pagamento::Pagamento(int idFuncionario, double pagamento)
{
    this->idFuncionario = idFuncionario;
    this->pagamento = pagamento;
}

void Pagamento::setFuncionario(int idFuncionario)
{
    this->idFuncionario = idFuncionario;
}



void Pagamento::setPagamento(double pagamento)
{
    this->pagamento = pagamento;
}

int Pagamento::getFuncionario()
{
    return this->idFuncionario;
}

double Pagamento::getPagamento()
{
    return this->pagamento;
}

Pagamento::~Pagamento()
{
}
