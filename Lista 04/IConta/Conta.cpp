#include "Conta.h"

Conta::Conta()
{
    nomeCliente = "";
    salarioMensal = 0;
    numeroConta = "";
    saldo = 0;
    limite = 0;
}

Conta::~Conta()
{
    //dtor
}

Conta::Conta(string nomeCliente, double salarioMensal, string numeroConta)
{
    setNomeCliente(nomeCliente);
    setSalarioMensal(salarioMensal);
    setNumeroConta(numeroConta);
    definirLimite();
}

void Conta::setNomeCliente(string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

string Conta::getNomeCliente()
{
    return nomeCliente;
}

void Conta::setSalarioMensal(double salarioMensal)
{
    this->salarioMensal = salarioMensal;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

void Conta::setNumeroConta(string numeroConta)
{
    this->numeroConta = numeroConta;
}

string Conta::getNumeroConta()
{
    return numeroConta;
}

void Conta::setSaldo(double saldo)
{
    this->saldo = saldo;
}

double Conta::getSaldo()
{
    return saldo;
}

void Conta::definirLimite()
{
    limite = 2 * salarioMensal;
}

double Conta::getLimite()
{
    return limite;
}

double Conta::saldoTotalDisponivel()
{
    return saldo + limite;
}

void Conta::sacar(double valor)
{
    if(valor > saldoTotalDisponivel())
    {
        cout << "Saldo insuficiente." << endl;
    }
    else
    {
        saldo -= valor;
    }
}

void Conta::depositar(double valor)
{
    saldo += valor;
}

void Conta::printConta()
{
    cout << nomeCliente << ", ";
    cout << "cc: " << numeroConta << ", ";
    cout << "salário " << salarioMensal << ", ";
    cout << "saldo total disponível: R$ " << saldoTotalDisponivel() << endl;
}