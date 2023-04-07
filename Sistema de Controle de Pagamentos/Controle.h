#ifndef CONTROLE_H
#define CONTROLE_H
#include "Pagamento.h"

class ControleDePagamentos
{
private:
    Pagamento vector[20];
public:
    ControleDePagamentos();
    void setPagamento(Pagamento p, int index);
    Pagamento getPagamento(int pos);
    float calculaTotalDePagamentos();
    int getIndexFuncionario(string nomeFuncionario);
};


#endif