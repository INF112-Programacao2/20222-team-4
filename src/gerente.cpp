#include "gerente.h"

// construtor
Gerente::Gerente(std::string nome, std::string documento, double porcentagemComissao, double salarioBase, double horasSemanais) : Funcionario(nome, documento, porcentagemComissao, salarioBase, horasSemanais)
{
}
// destrutor
Gerente::~Gerente() {}