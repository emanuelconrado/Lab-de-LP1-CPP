#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica
{
private:
    float base;
    float altura;
public:
    Triangulo();
    ~Triangulo();
    float calcularArea();
    void lerAtributosArea();
};
