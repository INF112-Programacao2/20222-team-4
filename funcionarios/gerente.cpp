#include "gerente.h"

std::string  Gerente::senha;

Gerente::Gerente() : Funcionario() {}
Gerente::Gerente(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais) : Funcionario(nome, documento, porcentagemComissao, salarioBase, horasSemanais) {

    this->senha = senha;
}

std::string Gerente::setSenha(std::string senha){
    this->senha = senha;
}
std::string Gerente::getSenha(){
    return this->senha;
}
Gerente::~Gerente() {}