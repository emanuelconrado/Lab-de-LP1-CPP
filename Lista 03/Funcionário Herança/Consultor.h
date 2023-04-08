#include "Funcionario.h"

class Consultor : public Funcionario
{
private:
public:
    Consultor();
    ~Consultor();
    float getSalario();
    float getSalario(float percentual);
};