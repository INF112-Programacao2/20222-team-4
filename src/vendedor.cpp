#include "vendedor.h"
// construtor
Vendedor::Vendedor(std::string nome, std::string documento, double porcentagemComissao, double salarioBase, double horasSemanais) : Funcionario(nome, documento, porcentagemComissao, salarioBase, horasSemanais) {}
// destrutor
Vendedor::~Vendedor() {}