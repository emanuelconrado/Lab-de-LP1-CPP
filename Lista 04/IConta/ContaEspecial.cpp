#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::~ContaEspecial()
{
    //dtor
}

ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, string numeroConta): Conta(nomeCliente, salarioMensal, numeroConta)
{
    definirLimite();
}

void ContaEspecial::definirLimite()
{
    limite = 3 * salarioMensal;
}

double ContaEspecial::saldoTotalDisponivel()
{
    return saldo + limite;
}

void ContaEspecial::printContaEspecial()
{
    cout << nomeCliente << ", ";
    cout << "cc: " << numeroConta << ", ";
    cout << "salário " << salarioMensal << ", ";
    cout << "saldo total disponível: R$ " << saldoTotalDisponivel() << endl;
}