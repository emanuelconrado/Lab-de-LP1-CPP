#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial: public Conta
{
    public:
        ContaEspecial();
        ~ContaEspecial();
        ContaEspecial(string nomeCliente, double salarioMensal, string numeroConta);
        void definirLimite();
        void printContaEspecial();
        double saldoTotalDisponivel();
};

#endif // CONTAESPECIAL_H