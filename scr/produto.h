#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto
{

private:
    static int generateIds;  //lembrar de inicializar esse contador no cpp =1;
    int id; // lembrar que no .cpp essa variavel recebe a generateIds

    std::string nomeProduto;
    double preco;
    int quantidade;

public:
    Produto(std::string nomeProduto, double preco, int quantidade);

    void setNome(std::string nomeProduto);
    void setPreco(double preco);
    void setQuantidade(int quantidade);

    std::string getNome();
    double getPreco(); 
    int getId();
    int getQuantidade();
    ~Produto();
};

#endif