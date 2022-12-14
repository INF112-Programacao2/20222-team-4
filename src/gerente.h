#ifndef GERENTE_H
#define GERENTE_H

#include <string>
#include "funcionario.h"

class Gerente : public Funcionario
{

private:


public:
// construtor
    Gerente(std::string nome, std::string documento, double porcentagemComissao, double salarioBase, double horasSemanais);
    
// destrutor
    ~Gerente();
    
};

#endif