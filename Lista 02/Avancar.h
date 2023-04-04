#ifndef AVANCAR_H
#define AVANCAR_H

#include <iostream>
using namespace std;

class Avancar
{
private:
    int dia;
    int mes;
    int ano;
public:
    Avancar();
    Avancar(int dia, int mes, int ano);
    ~Avancar();
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    int getDia();
    int getMes();
    int getAno();
    void avancarDia();
    int getDaysMonth(int mes);
};

#endif //AVANÇAR_H