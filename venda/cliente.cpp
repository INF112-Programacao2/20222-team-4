#include "cliente.h"

Cliente::Cliente() {}

int Cliente::generateIds = 0;

Cliente::Cliente(std::string nome, long long int documento, int totalCompras)
{
    this->nome = nome;
    this->documento = documento;
    this->totalCompras = totalCompras;
    this->id = Cliente::generateIds;

    Cliente::generateIds++;
}

std::string Cliente::getNome()
{
    return this->nome;
}
long long int Cliente::getDocumento()
{
    return this->cpf;
}
int Cliente::getTotalCompras()
{
    return this->totalCompras;
}

int Cliente::getId()
{
    return this->id;
}

std::string Cliente::setNome(std::string nome)
{
    this->nome;
}
long long int Cliente::setDocumento(long long int documento)
{
    this->cpf;
}
int Cliente::setTotalCompras(int totalCompras)
{
    this->totalCompras;
}


Cliente::~Cliente(){

}

