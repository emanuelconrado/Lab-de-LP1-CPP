#include "Gastos.h"

int main(){
    int n, i;
    string nome, TipoDeGasto;
    float valor;
    ControleDeGasto c;
    Despesa d;

    cin >> n;
    cin.ignore();

    for(i = 0; i < n; i++){
        getline(cin, nome);
        cin >> valor;
        cin.ignore();
        getline(cin, TipoDeGasto);

        d.setNome(nome);
        d.setValor(valor);
        d.setTipoDeGasto(TipoDeGasto);

        c.setDespesa(d, i);
    }

    getline(cin, TipoDeGasto);

    c.existeDespesasDoTipo(TipoDeGasto);

    cout << c.calculaValorTotaldeDespesa(TipoDeGasto) << "/" << c.calculaValorTotaldeDespesa() << endl;

    system("pause");
    

    return 0;
}