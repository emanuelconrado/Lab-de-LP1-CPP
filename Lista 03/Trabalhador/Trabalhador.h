#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>
#include <string>
using namespace std;

class Trabalhador
{
protected:
    string nome;
    float salario;
public:
    Trabalhador();
    ~Trabalhador();
    void setNome(string nome);
    void setSalario(float salario);
    string getNome();
    float getSalario();
};



#endif // TRABALHADOR_H