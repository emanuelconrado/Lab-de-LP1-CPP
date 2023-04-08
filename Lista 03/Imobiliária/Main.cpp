#include "Casa.h"
#include "Terreno.h"
#include "Apartamento.h"

int main(){
    int n, i, tipo;
    string disponibilidade;
    float valor;
    Casa *casa;
    Terreno *terreno;
    Apartamento *apartamento;
    Imoveis imoveis;

    cin >> n;

    for(i = 0; i < n; i++){
    cin >> tipo;
    cin >> valor;
    cin.ignore();

    imoveis.setTipo(tipo);

    imoveis.setDisponibilidade();

    if(tipo == 1){
        casa = new Casa(tipo);
        casa->setValor(valor);
        casa->lerAtributos();
        imoveis.exibirAtributos();
        casa->exibirAtributos();
        delete casa;
    }else if(tipo == 2){
        apartamento = new Apartamento(tipo);
        apartamento->setValor(valor);
        apartamento->lerAtributos();
        imoveis.exibirAtributos();
        apartamento->exibirAtributos();
        delete apartamento;
    }else if(tipo == 3){
        terreno = new Terreno(tipo);
        terreno->setValor(valor);
        terreno->lerAtributos();
        imoveis.exibirAtributos();
        terreno->exibirAtributos();
        delete terreno;
    }else if(tipo == 0){
        imoveis.setValor(0);
    }
    }

    system("pause");

    return 0;
}
