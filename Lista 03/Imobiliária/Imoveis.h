#ifndef IMOVEIS_H
#define IMOVEIS_H
#include <iostream>
#include <string>
using namespace std;

class Imoveis
{
protected:
    string nome;
    float valor;
    int tipo;
    string disponibilidade;
public:
    Imoveis();
    Imoveis(string nome, float valor, int tipo);
    ~Imoveis();
    void setNome(string nome);
    void setValor(float valor);
    void setTipo(int tipo);
    void setDisponibilidade();
    string getNome();
    float getValor();
    int getTipo();
    string getDisponibilidade();

    void exibirAtributos();
};


#endif