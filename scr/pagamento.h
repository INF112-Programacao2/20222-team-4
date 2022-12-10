
#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include "funcionario.h"

class Pagamento
{
private:
    int idFuncionario;
    double pagamento;

public:
    Pagamento(int idFuncionario, double pagamento);

    void setFuncionario(int idFuncionario);
    void setPagamento(double pagamento);

    int getFuncionario();
    double getPagamento();

    ~Pagamento();
};

#endif

