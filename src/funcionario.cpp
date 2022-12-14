#include "funcionario.h"

int Funcionario::generateId = 1;
double Funcionario::totalVendas = 0;
// construtor
Funcionario::Funcionario(std::string nome, std::string documento, double porcentagemComissao, double salarioBase, double horasSemanais)
{
    this->nome = nome;
    this->documento = documento;
    this->porcentagemComissao = porcentagemComissao;
    this->salarioBase = salarioBase;
    this->horasSemanais = horasSemanais;
    this->id = Funcionario::generateId;
    this->totalVendas = Funcionario::totalVendas;

    Funcionario::generateId++;
}
//  definindo nome do funcionario
void Funcionario::setNome(std::string nome)
{
    this->nome = nome;
}

// definindo documento do funcionario
void Funcionario::setDocumento(std::string documento)
{
    this->documento = documento;
}

// definindo percentual de comissao do funcionario
void Funcionario::setPorcentagemComissao(double porcentagemComissao)
{
    this->porcentagemComissao = porcentagemComissao;
}

// definindo salario base do funcionario
void Funcionario::setSalarioBase(double salarioBase)
{
    this->salarioBase = salarioBase;
}

// definindo carga horaria semanal do funcionario
void Funcionario::setHorasSemanais(double horasSemanais)
{
    this->horasSemanais = horasSemanais;
}

// somando total de vendas do funcionario
void Funcionario::setTotalVendas(double totalVendas)
{
    this->totalVendas += totalVendas;
}

// retornando nome do funcionario
std::string Funcionario::getNome()
{
    return this->nome;
}
// retornando documento
std::string Funcionario::getDocumento()
{
    return this->documento;
}
// retornando percentual da comissao
double Funcionario::getPorcentagemComissao()
{
    return this->porcentagemComissao;
}
// retornando salario base
double Funcionario::getSalarioBase()
{
    return this->salarioBase;
}
// retornando carga horaria semanal
double Funcionario::getHorasSemanais()
{
    return this->horasSemanais;
}
// retornando id do funcionario
int Funcionario::getId()
{
    return this->id;
}
// retornando total de vendas
double Funcionario::getTotalVendas()
{
    return this->totalVendas;
}
// destrutor
Funcionario::~Funcionario()
{
}