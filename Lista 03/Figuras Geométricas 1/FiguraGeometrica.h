#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include <string>
using namespace std;

class FiguraGeometrica
{
protected:
    string nome;
    int tipo;
public:
    FiguraGeometrica();
    FiguraGeometrica(int tipo);
    ~FiguraGeometrica();
    float virtual calcularArea() = 0;
    void virtual lerAtributosArea() = 0;
    string getNome();
};

#endif // FIGURAGEOMETRICA_H