#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica
{
private:
    float raio;
public:
    Circulo();
    ~Circulo();
    float calcularArea();
    void lerAtributosArea();
};
