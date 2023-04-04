#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main(){
    Invoice vetor[2];
    int numero;
    string descricao;
    int quant;
    float preco;
    int i;

    for(i = 0; i < 2; i++){
        cin >> numero;
        cin.ignore();
        getline(cin,descricao);
        cin >> quant;
        cin >> preco;

        if(quant < 0){
            quant = 0;
        }
        if(preco < 0){
            preco = 0;
        }

        vetor[i].setNumero(numero);
        vetor[i].setDescricao(descricao);
        vetor[i].setQuant(quant);
        vetor[i].setPreco(preco);

        vetor[i].printInvoice();
    }

    system("pause");

    


    return 0;
}