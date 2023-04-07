#include "Controle.h"

ControleDePagamentos::ControleDePagamentos(){
    
}

void ControleDePagamentos::setPagamento(Pagamento p, int index){
    vector[index] = p;
}
Pagamento ControleDePagamentos::getPagamento(int pos){
    return vector[pos];
}
float ControleDePagamentos::calculaTotalDePagamentos(){
    int i = 0;
    float valor = 0;
    for(i; i < 10; i++){
        valor += vector[i].getValorPagamento();
    }

    return valor;
}
int ControleDePagamentos::getIndexFuncionario(string nomeFuncionario){
    int i;
    int index = 0;
    for (i = 0; i < 10; i++){
        size_t found = vector[i].getNomeDoFuncionario().find(nomeFuncionario);
        if(found != string::npos){
            return index = i;
        }else{
            index = -1;
        }
    }

    return index;
}