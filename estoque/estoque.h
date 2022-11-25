#include <string>
#include "produto.h"
#include "funcionario.h"

class Estoque : public Produto{
    private: 

    public:
        void adicionarProduto(int id, std::string nome, int quantidadeProduto, double valor_Produto);
        void removerProduto(int id, std::string nome, int quantidadeProduto);
        bool consultarEstoque(int id, std::string nome, int quantidadeProduto);

        
    
};