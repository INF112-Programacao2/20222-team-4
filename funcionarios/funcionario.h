#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario {
    private:
    
    static int generateMatricula; // contador responsavel por gerar o numero de matricula
    int matricula; // recebe o numero de matricula

    

    protected:
    std::string nome;
    long long int documento;
    double porcentagemComissao; // define a porcentagem de comissao (ex 3%)
    double salarioBase; // salario base (por hora);
    double horasSemanais; // quantidade de horas trabalhadas por semana;
    double totalVendas; // valor total de vendas que esse funcionario fez;

    public:
    Funcionario(std::string nome, long long int documento, double porcentagemComissao, double salarioBase, double horasSemanais); // construtor
    

    std::string setNome();
    int setDocumento();
    double setPorcentagemComissao();
    double setSalarioBase();
    double setHorasSemanais();
    double setTotalVendas();


    std::string getNome();
    long long int getDocumento();
    double getPorcentagemComissao();
    double getSalarioBase();
    double getHorasSemanais();
    int getMatricula();
    double getTotalVendas();

    ~Funcionario(); 
};

#endif