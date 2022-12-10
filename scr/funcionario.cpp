#include "funcionario.h"


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

void Funcionario::setNome(std::string nome)
{
    this->nome = nome;
}


void Funcionario::setDocumento(long long int documento)
{
    this->documento = documento;
}

void Funcionario::setPorcentagemComissao(double porcentagemComissao)
{
    this->porcentagemComissao = porcentagemComissao;
}

void Funcionario::setSalarioBase(double salarioBase)
{
    this->salarioBase = salarioBase;
}
void Funcionario::setHorasSemanais(double horasSemanais)
{
    this->horasSemanais = horasSemanais;
}
void Funcionario::setTotalVendas(double totalVendas)
{
    this->totalVendas = totalVendas;
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

double Funcionario::getTotalVendas()
{
    return this->totalVendas;
}

Funcionario::~Funcionario()
{
}