
#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include "funcionario.h"

class Pagamento
{
private:
    int idFuncionario;
    double pagamento;

public:
    // construtor
    Pagamento(int idFuncionario, double pagamento);

    void setFuncionario(int idFuncionario); // definindo id do funcionario
    void setPagamento(double pagamento);    // definindo pagamento do funcionario

    int getFuncionario();  // retornando o funcionario
    double getPagamento(); // retornando o pagamento do funcionario

    // destrutor
    ~Pagamento();
};

#endif
