#include "Triangulo.h"

Triangulo::Triangulo(): FiguraGeometrica(3)
{
    nome = "Triangulo";
    tipo = 3;
}

Triangulo::~Triangulo()
{
}

float Triangulo::calcularArea()
{
    return (base * altura) / 2;
}

void Triangulo::lerAtributosArea()
{
    cin >> base;
    cin >> altura;
}