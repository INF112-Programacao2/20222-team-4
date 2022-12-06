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

    public:
        Cliente (std::string nome, long long int documento, int totalCompras);
        
    //getters
        std::string getNome();
        int getDocumento();
        int getTotalCompras();
        int getId();
    //setters
        std::string setNome(std::string nome);
        int setDocumento(long long int documento);
        int setTotalCompras(int totalCompras);


        
        // acho que e melhor tirar essa funcao
       // void cadastra_cliente(std::string nome, int cpf_cliente, int total_compras, double desconto);

        ~Cliente();
 
};

#endif