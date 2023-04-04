#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H
#include <iostream>
#include <string>
using namespace std;

class Funcionario
{
private:
    string nome;
    string sobrenome;
    float salario;
public:
    Funcionario();
    float getSalarioAnual();
    void aumentaSalario(float percent);
    void printAtrib();
    void setNome(string nome);
    void setSobrenome(string sobrenome);
    void setSalario(float salario);
};


#endif