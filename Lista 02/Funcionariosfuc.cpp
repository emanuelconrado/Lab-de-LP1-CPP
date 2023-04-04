#include "Funcionarios.h"
#include <iostream>
#include <string>
using namespace std;

Funcionario::Funcionario(){
    nome = "";
    sobrenome = "";
    salario = 0;
}

void Funcionario::setNome(string nome){
    this->nome = nome;
}
void Funcionario::setSobrenome(string sobrenome){
    this->sobrenome = sobrenome;
}
void Funcionario::setSalario(float salario){
    this->salario = salario;
}

float Funcionario::getSalarioAnual(){
    return salario*12;
}

void Funcionario::aumentaSalario(float percent){
    cout << getSalarioAnual()*percent + getSalarioAnual() << endl;
}

void Funcionario::printAtrib(){
    cout << nome << " " << sobrenome << " - " << salario << " - " << getSalarioAnual() << endl;
}