#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

int main(){
    Conta *conta;
    ContaEspecial *contaEspecial;

    string nome, contaNumero;
    double salario, deposito, saque;

// Conta

    getline(cin, nome);
    getline(cin, contaNumero);
    cin >> salario;
    cin >> deposito;
    cin >> saque;
    cin.ignore();


    conta = new Conta(nome, salario, contaNumero);
    conta->depositar(deposito);
    conta->sacar(saque);

// Conta Especial

    getline(cin, nome);
    getline(cin, contaNumero);
    cin >> salario;
    cin >> deposito;
    cin >> saque;
    cin.ignore();

    contaEspecial = new ContaEspecial(nome, salario, contaNumero);
    contaEspecial->depositar(deposito);
    contaEspecial->sacar(saque);

// Print

    conta->printConta();
    contaEspecial->printContaEspecial();

    system("pause");

    return 0;
}