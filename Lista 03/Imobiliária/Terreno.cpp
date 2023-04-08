#include "Terreno.h"

Terreno::Terreno(int tipo)
{
    setTipo(tipo);
}

Terreno::Terreno()
{
    area = 0;
}

Terreno::Terreno(float area)
{
    setArea(area);
}

Terreno::~Terreno()
{
}

void Terreno::setArea(float area)
{
    this->area = area;
}

float Terreno::getArea()
{
    return this->area;
}

void Terreno::lerAtributos()
{
    cin >> area;
}

void Terreno::exibirAtributos()
{
    cout << area << "m2 de área de terreno. ";
    cout << "R$ " << valor << "." << endl;
}