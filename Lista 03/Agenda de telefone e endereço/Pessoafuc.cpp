#include "Pessoa.h"

Pessoa::Pessoa(){
    
}
Pessoa::Pessoa(string nome){
    this->nome = nome;
}
Pessoa::Pessoa(string nome, Endereco endereco, Endereco, string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}
void Pessoa::setNome(string nome){
    this->nome = nome;
}
void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}
void Pessoa::setEndereco(Endereco endereco){
    this->endereco = endereco;
}
string Pessoa::getNome(){
    return nome;
}
string Pessoa::getTelefone(){
    return telefone;
}
Endereco Pessoa::getEndereco(){
    return endereco;
}
string Pessoa::toString(){
    cout << nome << ", " << telefone << endl;
    
}