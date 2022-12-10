#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>

class Cliente
{
private:
    static int generateIds;
    int id;

protected:
    std::string nome;
    long long int documento;

public:
    Cliente(std::string nome, long long int documento);

    // getters
    std::string getNome();
    long long int getDocumento();
    int getId();
    // setters
    void setNome(std::string nome);
    void setDocumento(long long int documento);

    ~Cliente();
};

#endif