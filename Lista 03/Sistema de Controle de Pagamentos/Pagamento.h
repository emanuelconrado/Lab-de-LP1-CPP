#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>
#include <string>
using namespace std;

class Pagamento
{
private:
    float valorPagamento;
    string nomeDoFuncionario;
public:
    Pagamento();
    void setValorPagamento(float Pagamento);
    void setNomeDoFuncionario(string nome);
    float getValorPagamento();
    string getNomeDoFuncionario();
};



#endif