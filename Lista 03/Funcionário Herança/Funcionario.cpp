#include "Funcionario.h"

Funcionario::Funcionario()
{
    setNome("Sem nome");
    setSalario(0);
    setMatricula("Sem matricula");
}

Funcionario::~Funcionario()
{
}

void Funcionario::setMatricula(string matricula)
{
    this->matricula = matricula;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void Funcionario::setSalario(float salario)
{
    this->salario = salario;
}

string Funcionario::getMatricula()
{
    return this->matricula;
}

string Funcionario::getNome()
{
    return this->nome;
}

float Funcionario::getSalario()
{
    return this->salario;
}