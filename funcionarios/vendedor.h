#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "funcionario.h"

class Vendedor : public Funcionario
{

private:
public:
    Vendedor(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);
    ~Vendedor();
};

#endif