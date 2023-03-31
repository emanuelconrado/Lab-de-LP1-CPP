#include "Gastos.h"

int main(){

int n = 0, i = 0, quantDeDespesa;
string nome, tipo;
float valor;
ControleDeGastos *gasto = new ControleDeGastos();
Despesa despesa;

cin >> n;
cin.ignore();

for(i = 0; i < n; i++)
{   
    getline(cin, nome);
    cin >> valor;
    cin.ignore();
    getline(cin, tipo);

    despesa.setNome(nome);
    despesa.setValor(valor);
    despesa.setTiposDeGasto(tipo);

    gasto->setDespesas(despesa, i);
}

getline(cin, tipo);


for(i = 0; i < n; i++)
{   
    if(gasto->existeDespesaDoTipo(tipo, i)){
        despesa = gasto->getDespesa(i);
        cout << despesa.getNome() << ", R$ " << despesa.getValor() << endl;
        quantDeDespesa++;
    }
}

if(quantDeDespesa == 0) cout << "Nenhuma despesa do tipo especificado" << endl;

cout << "Total: "<< gasto->calculaTotalDeDespesas(tipo, n) << "/" << gasto->calculaTotalDeDespesas() << endl;

return 0;
}