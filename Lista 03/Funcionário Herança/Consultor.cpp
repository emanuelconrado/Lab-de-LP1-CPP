#include "Consultor.h"

Consultor::Consultor()
{
}

Consultor::~Consultor()
{
}

float Consultor::getSalario()
{
    return (Funcionario::getSalario()*0.1) + Funcionario::getSalario();
}

float Consultor::getSalario(float percentual)
{
    return Funcionario::getSalario() + (Funcionario::getSalario() * percentual / 100);
}