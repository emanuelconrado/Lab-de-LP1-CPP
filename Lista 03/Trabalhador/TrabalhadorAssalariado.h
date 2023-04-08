#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
private:
    
public:
    TrabalhadorAssalariado();
    TrabalhadorAssalariado(float salario);
    ~TrabalhadorAssalariado();
    float calcularPagamentoSemanal();
};
