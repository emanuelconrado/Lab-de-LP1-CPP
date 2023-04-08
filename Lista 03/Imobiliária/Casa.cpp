#include "Casa.h"

Casa::Casa(int tipo)
{
    setTipo(tipo);
}

Casa::Casa()
{
    numeroPavimentos = 0;
    quartos = 0;
    area = 0;
    areaConstruida = 0;
}

Casa::Casa(int numeroPavimento, int quartos, float area, float areaConstruida)
{
    setNumero(numeroPavimento);
    setQuartos(quartos);
    setArea(area);
    setAreaConstruida(areaConstruida);
}

Casa::~Casa()
{
}

void Casa::setNumero(int numeroPavimentos)
{
    this->numeroPavimentos = numeroPavimentos;
}

void Casa::setQuartos(int quartos)
{
    this->quartos = quartos;
}

void Casa::setArea(float area)
{
    this->area = area;
}

void Casa::setAreaConstruida(float areaConstruida)
{
    this->areaConstruida = areaConstruida;
}

int Casa::getNumero()
{
    return this->numeroPavimentos;
}

int Casa::getQuartos()
{
    return this->quartos;
}

float Casa::getArea()
{
    return this->area;
}

float Casa::getAreaConstruida()
{
    return this->areaConstruida;
}

void Casa::lerAtributos()
{
    cin >> numeroPavimentos;
    cin >> quartos;
    cin >> area;
    cin >> areaConstruida;
}

void Casa::exibirAtributos()
{
    cout << numeroPavimentos << " pavimentos, " << quartos << " quartos, ";
    cout << area << "m2 de área de terreno e ";
    cout << areaConstruida << "m2 de área construída. " << "R$ " << valor << "." << endl;
}