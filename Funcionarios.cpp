#include <iostream>
#include <string>
#include "Funcionarios.h"
using namespace std;

int main(){
    int n = 0, i = 0;
    string nome, sobrenome;
    float salario;

    cin >> n;

    Funcionario vetor[n];

    for(i = 0; i < n; i++){
        cin >> nome;
        cin >> sobrenome;
        cin >> salario;

        if(salario < 0){
            salario = 0;
        }

        vetor[i].setNome(nome);
        vetor[i].setSobrenome(sobrenome);
        vetor[i].setSalario(salario);
        
        vetor[i].getSalarioAnual();
        vetor[i].printAtrib();
        vetor[i].aumentaSalario(0.1);
    }

    system("pause");

    return 0;
}