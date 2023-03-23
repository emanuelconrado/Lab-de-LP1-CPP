#include "Gastos.h"

//Despesa

Despesa::Despesa(){
    valor = 0;
}
Despesa::Despesa(string nome, int valor, string TiposDeGasto){
    setNome(nome);
    setValor(valor);
    setTipoDeGasto(TipoDeGasto);
}
void Despesa::setNome(string nome){
    this->nome = nome;
}
void Despesa::setValor(int valor){
    this->valor = valor;
}
void Despesa::setTipoDeGasto(string TipoDeGasto){
    this->TipoDeGasto = TipoDeGasto;
}
string Despesa::getNome(){
    return nome;
}
int Despesa::getValor(){
    return valor;
}
string Despesa::getTipoDeGasto(){
    return TipoDeGasto;
}

//ControleDeGasto

void ControleDeGasto::setDespesa(Despesa d, int pos){
    despesas[pos] = d;
}
Despesa ControleDeGasto::getDespesa(int pos){
    return despesas[pos];
}
float ControleDeGasto::calculaValorTotaldeDespesa(){
    int i;
    float totalDespesa;
    for (i = 0; i < 100; i++){
        totalDespesa += despesas[i].getValor();
    }
    return totalDespesa;
}
float ControleDeGasto::calculaValorTotaldeDespesa(string tipo){
    int i;
    float totalDoTipo;
    for(i = 0; i < 100; i++){
        size_t search = despesas[i].getNome().find(tipo);

        if(search != std::string::npos){
            totalDoTipo += despesas[i].getValor(); 
        }
    }

    return totalDoTipo;
}
bool ControleDeGasto::existeDespesasDoTipo(string tipo){
    int i;
    for(i = 0; i < 100; i++){
        size_t search = despesas[i].getNome().find(tipo);
        if(search != std::string::npos){
            return true;
            break;
            cout << despesas[i].getNome() << ", " << despesas[i].getValor();
        }else{
            return false;
            break;
            cout << "Nenhuma despesa do tipo especificado";
        }
    }
}