#include "data.h"

Data::Data(){
    dia = 0;
    mes = 0;
    ano = 0;
}

void Data::setDia(int dia){
    this->dia = dia;
}
void Data::setMes(int mes){
    this->mes = mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}

int Data::getDia(){
    return this->dia;
}
int Data::getMes(){
    return this->mes;
}
int Data::getAno(){
    return this->ano;
}

