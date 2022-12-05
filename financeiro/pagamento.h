#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include "funcionario.h"

class Pagamento 
{
private:
    double valorComissao;
    double salarioBase;
    int horasExtras;

public:
    Pagamento(double valorComissao, double salarioBase, int horasExtras);
    double setValorComissao();
    double setSalarioBase();
    int setHorasExtras();

    double getValorComissao();
    double getSalarioBase();
    int getHorasExtras();


    ~Pagamento();

};

#endif