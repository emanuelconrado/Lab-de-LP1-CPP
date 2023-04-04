#ifndef GASTOS_H
#define GASTOS_H
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Despesa
{
private:
    string nome;
    float valor;
    string tipoDeGasto;
public:
    Despesa();
    void setNome(string nome);
    void setValor(float valor);
    void setTiposDeGasto(string tipoDeGasto);
    string getNome();
    float getValor();
    string getTipoDeGasto();
};

class ControleDeGastos
{
private:
    Despesa despesa[100];
public:
    ControleDeGastos();
    void setDespesas(Despesa d, int pos);
    Despesa getDespesa(int pos);
    float calculaTotalDeDespesas();
    float calculaTotalDeDespesas(string tipo, int n);
    bool existeDespesaDoTipo(string tipo, int n);
};

#endif