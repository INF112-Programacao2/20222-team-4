#include "vendedor.h"
// construtor
Vendedor::Vendedor(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais) : Funcionario(nome, documento, porcentagemComissao, salarioBase, horasSemanais) {}
// destrutor
Vendedor::~Vendedor() {}