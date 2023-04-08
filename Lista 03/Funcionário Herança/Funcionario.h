#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>
using namespace std;

class Funcionario
{
protected:
    string matricula, nome;
    float salario;
public:
    Funcionario();
    ~Funcionario();
    void setMatricula(string matricula);
    void setNome(string nome);
    void setSalario(float salario);
    string getMatricula();
    string getNome();
    virtual float getSalario();
};



#endif