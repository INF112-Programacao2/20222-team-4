
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
    ItemCarrinho(Produto produto,int quantidade);
    std::string getNome();
    int getQuantidade();
    double getPreco();
    ~ItemCarrinho();
};




#endif


