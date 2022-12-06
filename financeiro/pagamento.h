#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include "funcionario.h"

class Pagamento
{
private:
    Funcionario funcionario;
    double pagamento;

public:
    Pagamento(Funcionario funcionario, double pagamento);

    Funcionario setFuncionario();
    double setPagamento();

    Funcionario getFuncionario();
    double getPagamento();

    ~Pagamento();
};

#endif