#include "Quadrado.h"

Quadrado::Quadrado(): FiguraGeometrica(1)
{
    nome = "Quadrado";
    tipo = 1;
}

Quadrado::~Quadrado()
{
}

float Quadrado::calcularArea()
{
    return lado * lado;
}

void Quadrado::lerAtributosArea()
{
    cout << "Digite o lado do quadrado: ";
    cin >> lado;
}