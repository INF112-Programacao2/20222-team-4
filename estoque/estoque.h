#include <string>
#include "produto.h"
#include "funcionario.h"

class Estoque {
    private: 

    public:
        void adcionarProduto(int id, std::string nome, int quantidadeProduto, double valor_Produto);
        void removerProduto(int id, std::string nome, int quantidadeProduto);
        bool consultarEstoque(int id, std::string nome, int quantidadeProduto);

        
    
};