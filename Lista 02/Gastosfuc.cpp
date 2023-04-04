#include "Gastos.h"

Despesa::Despesa(){
    valor = 0;
}

void Despesa::setNome(string nome)
{
    this->nome = nome;
}
void Despesa::setValor(float valor)
{
    this->valor = valor;
}
void Despesa::setTiposDeGasto(string tipoDeGasto)
{
    this->tipoDeGasto = tipoDeGasto;
}
string Despesa::getNome()
{
    return nome;
}
float Despesa::getValor()
{
    return valor;
}
string Despesa::getTipoDeGasto()
{
    return tipoDeGasto;
}

// Controle de Gastos

ControleDeGastos::ControleDeGastos()
{

}
void ControleDeGastos::setDespesas(Despesa d, int pos)
{
    despesa[pos] = d;
}
Despesa ControleDeGastos::getDespesa(int pos)
{
    return despesa[pos];
}
float ControleDeGastos::calculaTotalDeDespesas()
{   
    int i = 0;
    float total = 0;
    for(i = 0; i < 100; i++)
    {
        total += despesa[i].getValor();
    }

    return total;
}
float ControleDeGastos::calculaTotalDeDespesas(string tipo, int n)
{   
    int i = 0;
    float total = 0;
    for(i = 0; i < n; i++)
    {   
        if(existeDespesaDoTipo(tipo, i))
        {
            total += despesa[i].getValor();
        }
    }
    
    return total;
}
bool ControleDeGastos::existeDespesaDoTipo(string tipo, int n)
{   
        if(despesa[n].getTipoDeGasto() == tipo)
        {
            return true;
        }
        return false;
        
}