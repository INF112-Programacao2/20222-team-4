
#ifndef ITEM_CARRINHO_H
#define ITEM_CARRINHO_H

#include "produto.h"
#include <vector>
#include <string>
class ItemCarrinho
{
private:
    Produto produto;
    int quantidade;
    
public:
            // ----CARRINHO----

    // construtor
    ItemCarrinho(Produto produto,int quantidade);

    std::string getNome();  // retornando nome do produto,
    int getQuantidade();    // retornando quantidade do produto
    double getPreco();      // retornando preco 

    //destrutor
    ~ItemCarrinho();    
};




#endif


