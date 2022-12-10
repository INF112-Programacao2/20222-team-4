#include "vendedor.h"

Vendedor::Vendedor(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais) : Funcionario(nome, documento, porcentagemComissao, salarioBase, horasSemanais) {}
Vendedor::~Vendedor() {}