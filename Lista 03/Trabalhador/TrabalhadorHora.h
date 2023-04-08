#include "Trabalhador.h"

class TrabalhadorHora : public Trabalhador
{
private:
    float valorHora;
public:
    TrabalhadorHora(float valorHora);
    ~TrabalhadorHora();
    float calcularPagamentoSemanal(int horas);
};