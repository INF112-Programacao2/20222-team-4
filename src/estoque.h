#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <vector>
#include "produto.h"
#include "funcionario.h"

class Estoque
{
protected:
    static std::vector<Produto> listaProdutos;

public:
    Estoque();
    void bancoDeDados(); // criar um "banco de dados" fake

    const std::vector<Produto> &lerListaProdutos();
    int consultaEstoque(Produto produto);          // buscar se tem o produto no estoque
    void adicionarProduto(const Produto &produto); // adiciona o produto

    ~Estoque();
};

#endif