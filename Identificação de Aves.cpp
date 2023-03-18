#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int i = 0;
    int a = 0; //irá guardar a somatória dos pesos
    int b = 0; //assumira o valor da propriedade do animal
    int vector[5];

    for(i = 0; i < 5; i++)
    {
        cin >> vector[i];
    }
    

/*
Utilizei pesos para definir animal:
Aquático = 6
Predadora = 5
Doméstica = 4
Voa = 3
Noturna = 2
*/

/*
Caso o número digitado na respectiva propriedade seja 0,
será subtraído o respectivo peso da variavel que guarda o valor

exemplo:
Se for 0 para Predadora, a = a - 5
*/

    for(i = 0; i < 5; i++)
    {
        if(vector[i] == 1)
        {
            b = 5 - i;
            a = a + (b + 1);
        }else
        {
            b = i - 5;
            a = a + (b - 1);
        }
    }

/*Respectivo animal com base no peso das propriedades totais*/

    switch (a)
    {
    case -20:
        cout << "avestruz";
        break;
    case 12:
        cout << "garça";
        break;
    case 8:
        cout << "gaivota";
        break;
    case 2:
        cout << "pinguim";
        break;
    case -2:
        cout << "pato";
        break;
    case -4:
        cout << "falcão";
        break;
    case -10:
        cout << "ema";
        break;
    case -6:
        cout << "galinha";
        break;
    case -14:
        cout << "pardal";
        break;
    case 0:
        cout << "coruja";
        break;
    default:
        break;
    }


    return 0;
}