#ifndef PESSOAS_H
#define PESSOAS_H
#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    string telefone;
public:
    Pessoa();
    Pessoa(string nome);
    Pessoa(string nome, int idade, string telefone);
    void setNome(string nome);
    string getNome();
    void setIdade(int idade);
    int getIdade();
    void setTelefone(string telefone);
    string getTelefone();
};


#endif