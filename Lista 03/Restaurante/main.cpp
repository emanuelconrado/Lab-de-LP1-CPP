#include "Restaurante.h"

int main(){
    Restaurante restaurante;
    Pedido pedido;
    int mesa, numero, quantidade;
    string descricao;
    float preco;

    while (true)
    {
        cin >> numero;
        if(numero < 0)
            break;
        cin.ignore();
        getline(cin, descricao);
        cin >> quantidade;
        cin >> preco;
        cin >> mesa;
    
        restaurante.adicionaAoPedido(Pedido(numero, descricao, quantidade, preco), mesa);
    }

    restaurante.exibeTotalRestaurante();

    system("pause");

    return 0;
}