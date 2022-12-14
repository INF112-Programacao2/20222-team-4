

#include "pagamento.h"
// construtor
Pagamento::Pagamento(int idFuncionario, double pagamento)
{
    this->idFuncionario = idFuncionario;
    this->pagamento = pagamento;
}

// definindo funcionario
void Pagamento::setFuncionario(int idFuncionario)
{
    this->idFuncionario = idFuncionario;
}

// definindo pagamento
void Pagamento::setPagamento(double pagamento)
{
    this->pagamento = pagamento;
}

// pegando funcionario e retornando
int Pagamento::getFuncionario()
{
    return this->idFuncionario;
}

// pegando pagamento e retornando
double Pagamento::getPagamento()
{
    return this->pagamento;
}

// destrutor
Pagamento::~Pagamento()
{
}
