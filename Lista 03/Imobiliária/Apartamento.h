#include "Imoveis.h"

class Apartamento : public Imoveis
{
private:
    float area;
    int quartos;
    int andar;
    float valorCondominio;
    int vagasGaragem;
public:
    Apartamento(int tipo);
    Apartamento();
    Apartamento(float area, int quartos, int andar, float valorCondominio, int vagasGaragem);
    ~Apartamento();
    void setArea(float area);
    void setQuartos(int quartos);
    void setAndar(int andar);
    void setValor(float valorCondominio);
    void setVagasGaragem(int vagasGaragem);
    float getArea();
    int getQuartos();
    int getAndar();
    float getValor();
    int getVagasGaragem();
    void lerAtributos();
    void exibirAtributos();
};