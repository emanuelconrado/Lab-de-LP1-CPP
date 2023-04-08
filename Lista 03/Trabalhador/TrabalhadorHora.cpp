#include "TrabalhadorHora.h"

TrabalhadorHora::TrabalhadorHora(float valorHora)
{
    this->valorHora = valorHora;
}

TrabalhadorHora::~TrabalhadorHora()
{
}

float TrabalhadorHora::calcularPagamentoSemanal(int horas)
{
    if (horas <= 40)
    {
        return horas * this->valorHora;
    }
    else
    {
        return (40 * this->valorHora) + ((horas - 40) * (this->valorHora * 1.5));
    }
}
