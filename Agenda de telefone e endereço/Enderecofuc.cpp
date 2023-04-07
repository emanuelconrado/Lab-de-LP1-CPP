
#include "Endereco.h"

Endereco::Endereco(){

}

Endereco::Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep){
    this->rua = rua;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->numero = numero;
    this->cep = cep;
}

string Endereco::toString(){
    cout << rua << ", " << numero << ", " << bairro << ". " << cidade << " - " << estado << ". "<< "CEP: " << cep << endl;
}