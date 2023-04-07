#include "Circulo.h"

Circulo::Circulo(): FiguraGeometrica(3)
{
    nome = "Circulo";
    tipo = 4;
}

Circulo::~Circulo()
{
}

float Circulo::calcularArea()
{
    return 3.14 * raio * raio;
}

void Circulo::lerAtributosArea()
{
    cout << "Digite o raio do circulo: ";
    cin >> raio;
}