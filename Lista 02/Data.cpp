#include <iostream>
#include "data.h"
using namespace std;

/*
class Data
{

private:
int dia;
int mes;
int ano;

public:

Data(int d = 0, int m = 0, int a = 0){
    dia = d;
    mes = m;
    ano = a;
}


void setDia(int dia){
    this->dia = dia;
}
int getDia(){
    return dia;
}
void setMes(int mes){
    this->mes = mes;
}
int getMes(){
    return mes;
}
void setAno(int ano){
    this->ano = ano;
}
int getAno(){
    return ano;
}

};
*/

int main(){
    Data d1;
    int dia, mes, ano;

    cin >> dia >> mes >> ano;

    d1.setDia(dia);
    d1.setMes(mes);
    d1.setAno(ano);

    cout << d1.getDia() << "/" << d1.getMes() << "/" << d1.getAno() << endl;

    system("pause");

    return 0;
}