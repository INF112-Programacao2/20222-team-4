#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include "funcionario.h"

class Pagamento
{
private:
    Funcionario funcionario;
    double valorComissao;
    double salarioBase;
    int horasExtras;

public:
    Pagamento(Funcionario funcionario, double valorComissao, double salarioBase, int horasExtras);

    Funcionario setFuncionario();
    double setValorComissao();
    double setSalarioBase();
    int setHorasExtras();

    double getValorComissao();
    double getSalarioBase();
    int getHorasExtras();
    Funcionario getFuncionario();

    ~Pagamento();
};

#endif