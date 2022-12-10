#include "cliente.h"



int Cliente::generateIds = 0;

Cliente::Cliente(std::string nome, long long int documento)
{
    this->nome = nome;
    this->documento = documento;
    this->id = Cliente::generateIds;

    Cliente::generateIds++;
}

void Cliente::setNome(std::string nome)
{
    this->nome;
}

void Cliente::setDocumento(long long int documento)
{
    this->documento;
}


std::string Cliente::getNome()
{
    return this->nome;
}
long long int Cliente::getDocumento()
{
    return this->documento;
}


int Cliente::getId()
{
    return this->id;
}




Cliente::~Cliente(){

}

