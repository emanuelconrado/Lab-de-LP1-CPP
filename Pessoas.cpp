#include "Pessoas.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome, telefone, search;
    int idade;
    int i = 0, pessoas = 0;
    int quant;

    cin >> quant;
    cin.ignore();
    Pessoa vetor[quant];

    for(i = 0; i < quant; i++){
        getline(cin, nome);
        cin >> idade;
        cin.ignore();
        getline(cin, telefone);

        vetor[i].setIdade(idade);
        vetor[i].setNome(nome);
        vetor[i].setTelefone(telefone);
    }
    
    getline(cin, search);

    for(i = 0; i < quant; i++){
        size_t found = vetor[i].getNome().find(search);
        if(found != string::npos){
            cout << vetor[i].getNome() << ", " << vetor[i].getIdade() << ", " << vetor[i].getTelefone() << endl;
            pessoas++;

        }
    }

    if(pessoas == 0){
        cout << "Pessoa não encontrada";
    }

    system("pause");




    return 0;
}