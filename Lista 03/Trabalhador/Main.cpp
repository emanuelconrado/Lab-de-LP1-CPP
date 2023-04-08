#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorHora.h"

int main(){
    int n, i, tipoTrabalhador, horas;
    string nome;
    float salario, valorHora;
    TrabalhadorAssalariado *trabalhadorAss;
    TrabalhadorHora *trabalhadorHora;
    Trabalhador *trabalhador;


    cin >> n;

    for(i = 0; i < n; i++){
        cin >> tipoTrabalhador;
        cin.ignore();

        if(tipoTrabalhador == 1){
            getline(cin, nome);
            cin >> salario;
            cin.ignore();

            trabalhadorAss = new TrabalhadorAssalariado(salario);
            trabalhadorAss->setNome(nome);

            cout << trabalhadorAss->getNome();
            cout << " - Semanal: R$ ";
            cout << trabalhadorAss->calcularPagamentoSemanal();
            cout << " - Mensal: R$" << (trabalhadorAss->calcularPagamentoSemanal() * 4) << endl;
        }


        if(tipoTrabalhador == 2){
            getline(cin, nome);
            cin >> valorHora;
            cin >> horas;
            cin.ignore();

            trabalhadorHora = new TrabalhadorHora(valorHora);
            trabalhadorHora->setNome(nome);

            cout << trabalhadorHora->getNome();
            cout << " - Semanal: R$ ";
            cout << trabalhadorHora->calcularPagamentoSemanal(horas);
            cout << " - Mensal: R$" << (trabalhadorHora->calcularPagamentoSemanal(horas) * 4) << endl;
        }


    }

    system("pause");


    return 0;
}