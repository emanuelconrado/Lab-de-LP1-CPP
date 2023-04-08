#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado()
{
}

TrabalhadorAssalariado::TrabalhadorAssalariado(float salario)
{
    setSalario(salario);
}

TrabalhadorAssalariado::~TrabalhadorAssalariado()
{
}

float TrabalhadorAssalariado::calcularPagamentoSemanal()
{
    return this->salario/4;
}