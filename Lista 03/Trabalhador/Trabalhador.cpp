#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    salario = 0;
}

Trabalhador::~Trabalhador()
{
}

void Trabalhador::setNome(string nome)
{
    this->nome = nome;
}

void Trabalhador::setSalario(float salario)
{
    this->salario = salario;
}

string Trabalhador::getNome()
{
    return this->nome;
}

float Trabalhador::getSalario()
{
    return this->salario;
}

