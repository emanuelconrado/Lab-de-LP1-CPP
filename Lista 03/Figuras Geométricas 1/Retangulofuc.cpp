#include "Retangulo.h"

Retangulo::Retangulo() : FiguraGeometrica(2)
{
    nome = "Retangulo";
    tipo = 2;
}

Retangulo::~Retangulo()
{
}

float Retangulo::calcularArea()
{
    return base * altura;
}

void Retangulo::lerAtributosArea()
{
    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;
}