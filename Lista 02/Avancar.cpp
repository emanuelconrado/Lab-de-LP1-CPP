#include "Avancar.h"

int main(){
    Avancar d;
    int dia, mes, ano;
    int avancar = 0;

    cin >> dia;
    cin >> mes;
    cin >> ano;
    cin >> avancar;

    d = Avancar(dia, mes, ano);

    for(int i = 0; i < avancar; i++){
        d.avancarDia();
    }

    printf("%.2d/", d.getDia());
    printf("%.2d/", d.getMes());
    printf("%d\n", d.getAno());

    system("pause");

    return 0;
}