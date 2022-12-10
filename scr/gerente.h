#ifndef GERENTE_H
#define GERENTE_H

#include <string>
#include "funcionario.h"

class Gerente : public Funcionario
{
private:


public:
    Gerente(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);

    ~Gerente();
    
};

#endif