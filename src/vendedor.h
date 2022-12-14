#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "funcionario.h"

class Vendedor : public Funcionario
{

private:
public:
    // construtor
    Vendedor(std::string nome, std::string documento, double porcentagemComissao, double salarioBase, double horasSemanais);
    
    // destrutor
    ~Vendedor();
};

#endif