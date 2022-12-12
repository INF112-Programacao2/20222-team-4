#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto
{

private:
    static int generateIds;  // gerador de Ids
    int id; //id

    // dados do produto
    std::string nomeProduto;
    double preco;
    int quantidade;

public:
    //construtores
    Produto(std::string nomeProduto, double preco, int quantidade);
    Produto();

    // prototipo das funcoes que definem os dados do produto
    void setNome(std::string nomeProduto);  //nome
    void setPreco(double preco);            //preco
    void setQuantidade(int quantidade);     //quantidade

    // prototipo das funcoes que retornam os dados do produto
    std::string getNome();  //nome
    double getPreco();      //preco
    int getId();            //Id
    int getQuantidade();    //quantidade
    // destrutor
    ~Produto();
};

#endif