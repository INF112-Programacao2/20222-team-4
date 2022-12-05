#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto
{

private:
    int generateIds; //lembrar de inicializar esse contador no cpp
    int id; // lembrar que no .cpp essa variavel recebe a generateIds

    std::string nomeProduto;
    double preco;
    int quantidade;

public:
    Produto(std::string nomeProduto, double preco, int quantidade);

    std::string setNome();
    double setPreco();
    int setQuantidade();

    std::string getNome();
    double getPreco(); 
    int getId();
    int getQuantidade();
    ~Produto();
};

#endif