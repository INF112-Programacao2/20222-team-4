#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
private:
    static int generateId; // contador responsavel por gerar o numero de id
    int id;                // recebe o numero de id

protected:
    std::string nome;
    std::string documento;
    double porcentagemComissao; // define a porcentagem de comissao (ex 3%)
    double salarioBase;         // salario base (por hora);
    double horasSemanais;       // quantidade de horas trabalhadas por semana;
    static double totalVendas;  // valor total de vendas que esse funcionario fez;

public:
    Funcionario(std::string nome, std::string documento, double porcentagemComissao, double salarioBase, double horasSemanais); // construtor

    // prototipos de funcoes que definem diversos dados do funcionario
    void setNome(std::string nome);
    void setDocumento(std::string documento);
    void setPorcentagemComissao(double porcentagemComissao);
    void setSalarioBase(double salarioBase);
    void setHorasSemanais(double horasSemanais);
    void setTotalVendas(double totalVendas);

    // prototipos de funcoes que retornam diversos dados dos funcionarios
    std::string getNome();
    std::string getDocumento();
    double getPorcentagemComissao();
    double getSalarioBase();
    double getHorasSemanais();
    int getId();
    double getTotalVendas();

    ~Funcionario(); // destrutor
};

#endif