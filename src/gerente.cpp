#include "gerente.h"

// construtor
Gerente::Gerente(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais) : Funcionario(nome, documento, porcentagemComissao, salarioBase, horasSemanais) {

   
}
//destrutor
Gerente::~Gerente() {}