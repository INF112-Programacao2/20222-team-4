#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
    private:
        static int generateIds;
        int id;

    protected:
        std::string nome;
        int documento;
        int totalCompras;
        double desconto;

    public:
        Cliente ();
        
    //getters
        std::string getNome();
        int getDocumento();
        int getTotalCompras();
        double getDesconto();
        int getId();
    //setters
        int setDocumento();
        int setTotalCompras();
        double setDesconto();

        
        // acho que e melhor tirar essa funcao
       // void cadastra_cliente(std::string nome, int cpf_cliente, int total_compras, double desconto);

        ~Cliente();
 
};

#endif