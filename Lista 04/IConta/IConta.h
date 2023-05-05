#ifndef ICONTA_H
#define ICONTA_H

#include <iostream>
#include <string>
using namespace std;

class IConta
{
public:
    virtual double saldoTotalDisponivel() = 0;
    virtual void sacar(double valor) = 0;
    virtual void depositar(double valor) = 0;
};




#endif // ICONTA_H