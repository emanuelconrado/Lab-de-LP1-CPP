#include "Avancar.h"

Avancar::Avancar():Avancar::Avancar(1, 1, 1){
}
Avancar::~Avancar(){
}

//Validando e atribuindo os dias de cada mês e os meses de cada ano.

Avancar::Avancar(int dia, int mes, int ano){

    if(dia > getDaysMonth(mes) || dia < 1){
        setDia(1);
        cout << "Atributo dia Inválido" << endl;
    }else{
        setDia(dia);
    }

    if(mes > 12 || mes < 1){
        setMes(1);
        cout << "Atributo mês Inválido" << endl;

    }else{
        setMes(mes);
    }
        setAno(ano);
}

//Sets e Gets

void Avancar::setDia(int dia){
    this->dia = dia;
}
void Avancar::setMes(int mes){
    this->mes = mes;
}
void Avancar::setAno(int ano){
    this->ano = ano;
}
int Avancar::getDia(){
    return dia;
}
int Avancar::getMes(){
    return mes;
}
int Avancar::getAno(){
    return ano;
}

//

/*
Metodo que avança os dias. Caso a quantidade dia seja maior que a do mês,
é atribuido 1 para o dia e o mês avança em 1, o mesmo vale para caso o mês ultrapasse 12.
*/

void Avancar::avancarDia(){
    int avanc = getDia() + 1;
    if(avanc > getDaysMonth(mes)){
        mes++;
        avanc = 1;
        if(mes > 12){
            mes = 1;
            ano++;
        }
    }
    setDia(avanc);
}

//Verifica a quantidade dias do mês;

int Avancar::getDaysMonth(int mes){
    int vector[]= {31,28,31,30,31,30,31,31,30,31,30,31};

    return vector[mes-1];
}