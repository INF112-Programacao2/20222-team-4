#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {
    private:
    
    static int generateMatricula;
    int matricula;
    

    protected:
    std::string nome;
    long long int documento;
    double porcentagemComissao;
    double salarioBase;
    double horasSemanais;

    public:
    Funcionario(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais); // construtor
    

    std::string setNome();
    int setDocumento();
    double setPorcentagemComissao();
    double setSalarioBase();
    double setHorasSemanais();


    std::string getNome();
    long long int getDocumento();
    double getPorcentagemComissao();
    double getSalarioBase();
    double getHorasSemanais();
    int getMatricula();

    ~Funcionario(); 
};

#endif