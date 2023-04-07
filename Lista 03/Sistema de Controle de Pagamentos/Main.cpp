#include "Controle.h"
#include "Pagamento.h"

int main(){
    Pagamento p;
    ControleDePagamentos c;
    int quant, i;
    int pagamento;
    string nome;
    int index;

    cin >> quant;

    for(i = 0; i < quant; i++){
        cin >> pagamento;
        cin.ignore();
        getline(cin, nome);

        p.setNomeDoFuncionario(nome);
        p.setValorPagamento(pagamento);

        c.setPagamento(p, i);

    }

    getline(cin, nome);
    index = c.getIndexFuncionario(nome);

    if(index != -1){
    cout << c.getPagamento(index).getNomeDoFuncionario() << ": R$ "<< c.getPagamento(index).getValorPagamento() << endl;
    }else{
        cout << nome << " não encontrado(a)." << endl;
    }

    cout << "Total: R$ "<< c.calculaTotalDePagamentos() << endl;
    
    system("pause");

    return 0;
}