#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(int tipo)
{
    this->tipo = tipo;
}

FiguraGeometrica::~FiguraGeometrica()
{
}

string FiguraGeometrica::getNome()
{
    return nome;
}

