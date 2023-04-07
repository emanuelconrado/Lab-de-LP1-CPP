#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica
{
private:
    float lado;
public:
    Quadrado();
    ~Quadrado();
    float calcularArea();
    void lerAtributosArea();
};

