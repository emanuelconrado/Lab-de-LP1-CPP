#include "Imoveis.h"

class Casa : public Imoveis
{
private:
    int numeroPavimentos;
    int quartos;
    float area;
    float areaConstruida;
public:
    
    Casa();
    Casa(int tipo);
    Casa(int numeroPavimentos, int quartos, float area, float areaConstruida);
    ~Casa();
    void setNumero(int numero);
    void setQuartos(int quartos);
    void setArea(float area);
    void setAreaConstruida(float areaConstruida);
    int getNumero();
    int getQuartos();
    float getArea();
    float getAreaConstruida();
    void lerAtributos();
    void exibirAtributos();
};
