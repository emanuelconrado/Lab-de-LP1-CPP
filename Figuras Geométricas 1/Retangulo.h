#include "FiguraGeometrica.h"

class Retangulo: public FiguraGeometrica
{
private:
    float base;
    float altura;
public:
    Retangulo();
    ~Retangulo();
    float calcularArea();
    void lerAtributosArea();
};
