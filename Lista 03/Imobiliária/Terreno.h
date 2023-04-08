#include "Imoveis.h"

class Terreno : public Imoveis
{
private:
    float area;
public:
    Terreno(int tipo);
    Terreno();
    Terreno(float area);
    ~Terreno();
    void setArea(float area);
    float getArea();
    float getValor();
    void lerAtributos();
    void exibirAtributos();
};
