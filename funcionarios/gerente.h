#ifndef GERENTE_H
#define CLASSES_H

#include <string>
#include "funcionario.h"

class Gerente : public Funcionario
{
private:
    std::string senha;

public:
    Gerente(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais);
    std::string setSenha();
    std::string getSenha();
    ~Gerente();
    
};

#endif