#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
    float salario = 0, emprestimo = 0;
    int parcelas = 0;

//As variáveis não podem receber 0 ou um número negativo

    while(salario <= 0)
    {
        cin >> salario;
    }

    while(emprestimo <= 0)
    {
        cin >> emprestimo;
    }

    while(parcelas <= 0)
    {
        cin >> parcelas;
    }
    
/*
Para que o emprestimo seja liberado, emprestimo divido pelas
parcelas deve ser menor que 30% so salário
*/
    

    if(emprestimo/parcelas > salario*0.3)
    {
        cout << "Emprestimo nao pode ser concedido";
    }else
    {
        cout << "Emprestimo pode ser concedido";
    }


    return 0;
}