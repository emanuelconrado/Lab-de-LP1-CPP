#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"

class Conta: public IConta
{
protected:
    string nomeCliente;
    double salarioMensal;
    string numeroConta;
    double saldo;
    double limite;
public:
    Conta();
    ~Conta();
    Conta(string nomeCliente, double salarioMensal, string numeroConta);
    void setNomeCliente(string nomeCliente);
    string getNomeCliente();
    void setSalarioMensal(double salarioMensal);
    double getSalarioMensal();
    void setNumeroConta(string numeroConta);
    string getNumeroConta();
    void setSaldo(double saldo);
    double getSaldo();
    virtual void definirLimite();
    double getLimite();
    double saldoTotalDisponivel();
    void sacar(double valor);
    void depositar(double valor);
    void printConta();
};


#endif // CONTA_H