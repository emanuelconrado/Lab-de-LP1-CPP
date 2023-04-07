#include "Endereco.h"
#include "Pessoa.h"

int main(){
    Endereco *e;
    int count, i, j;
    string vector[8];
    cin >> count;
    cin.ignore();
    Pessoa p[count];

    for(i = 0; i < count; i++){

        for(j = 0; j < 8; j++){
            getline(cin, vector[j]);
        }

        e = new Endereco(vector[2], vector[3], vector[4], vector[5], vector[6], vector[7]);
        p[i].setNome(vector[0]);
        p[i].setTelefone(vector[1]);

        p[i].toString();
        e->toString();

        cout << "" << endl;
    }

    return 0;
}