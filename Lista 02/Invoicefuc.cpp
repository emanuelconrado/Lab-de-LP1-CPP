#include "Invoice.h"
#include <iostream>
#include <string>
using namespace std;

Invoice::Invoice(){
    numero = 0;
    descricao = "";
    quant = 0;
    preco = 0;
}

float Invoice::getInvoiceAmount(){
    return quant*preco;
}

void Invoice::printInvoice(){
    cout << numero << " - " << descricao << " - " << quant << " - " << preco << " - " << getInvoiceAmount() << endl;
}

void Invoice::setNumero(int numero){
    this->numero = numero;
 }
int Invoice::getNumero(){
    return this->numero;
}
void Invoice::setDescricao(string descricao){
    this->descricao = descricao;
}
string Invoice::getDescricao(){
    return this->descricao;
}
void Invoice::setQuant(int quant){
    this->quant = quant;
}
int Invoice::getQuant(){
    return this->quant;
}
void Invoice::setPreco(float preco){
    this->preco = preco;
}
float Invoice::getPreco(){
     return this->preco;
}