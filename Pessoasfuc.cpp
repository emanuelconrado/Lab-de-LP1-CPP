#include "Pessoas.h"
#include <iostream>
#include <string>
using namespace std;

Pessoa::Pessoa(){
    nome = "";
    idade = 0;
    telefone = "";
}

Pessoa::Pessoa(string nome, int idade, string telefone){
    setNome(nome);
    setIdade(idade);
    setTelefone(telefone);
}
Pessoa::Pessoa(string nome){
    setNome(nome);
}
void Pessoa::setNome(string nome){
    this->nome = nome;
}
string Pessoa::getNome(){
    return nome;
}
void Pessoa::setIdade(int idade){
    this->idade = idade;
}
int Pessoa::getIdade(){
    return idade;
}
void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}
string Pessoa::getTelefone(){
    return telefone;
}
