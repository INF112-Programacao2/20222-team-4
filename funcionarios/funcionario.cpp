#include "funcionario.h"

Funcionario::Funcionario()
{
}

int Funcionario::generateMatricula = 0;

Funcionario::Funcionario(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    this->nome = nome;
    this->documento = documento;
    this->porcentagemComissao = porcentagemComissao;
    this->salarioBase = salarioBase;
    this->horasSemanais = horasSemanais;
    this->matricula = Funcionario::generateMatricula;

    Funcionario::generateMatricula++;
}

std::string Funcionario::setNome(std::string nome)
{
    this->nome = nome;
}

long long int Funcionario::setDocumento(long long int documento)
{
    this->documento = documento;
}

double Funcionario::setPorcentagemComissao(double porcentagemComissao)
{
    this->porcentagemComissao = porcentagemComissao;
}

double Funcionario::setSalarioBase(double salarioBase)
{
    this->salarioBase = salarioBase;
}
double Funcionario::setHorasSemanais(double horasSemanais)
{
    this->horasSemanais = horasSemanais;
}

std::string Funcionario::getNome()
{
    return this->nome;
}
long long int Funcionario::getDocumento()
{
    return this->documento;
}

double Funcionario::getPorcentagemComissao()
{
    return this->porcentagemComissao;
}
double Funcionario::getSalarioBase()
{
    return this->salarioBase;
}

double Funcionario::getHorasSemanais()
{
    return this->horasSemanais;
}
int Funcionario::getMatricula()
{
    return this->matricula;
}

Funcionario::~Funcionario(){

}