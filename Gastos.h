#ifndef GASTOS_H
#define GASTOS_H
#include <iostream>
#include <string>
using namespace std;

class Despesa
{
private:
    string nome;
    int valor;
    string TipoDeGasto;

public:
    Despesa();
    Despesa(string nome, int valor, string TiposDeGasto);
    void setNome(string nome);
    void setValor(int valor);
    void setTipoDeGasto(string TipoDeGasto);
    string getNome();
    int getValor();
    string getTipoDeGasto();
};

class ControleDeGasto
{
private:
    Despesa despesas[100];
public:
    void setDespesa(Despesa d, int pos);
    Despesa getDespesa(int pos);
    float calculaValorTotaldeDespesa();
    float calculaValorTotaldeDespesa(string tipo);
    bool existeDespesasDoTipo(string tipo);

};
#endif