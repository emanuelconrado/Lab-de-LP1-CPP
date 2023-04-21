#include "Restaurante.h"

Restaurante::Restaurante()
{
    //ctor
}

Restaurante::~Restaurante()
{
    //dtor
}

void Restaurante::adicionaAoPedido(Pedido pedido, int mesa)
{
    if(mesa > mesas.size())
    {
        MesaDeRestaurante mesaDeRestaurante;
        mesaDeRestaurante.adicionaAoPedido(pedido);
        mesaDeRestaurante.setMesa(mesa);
        mesas.push_back(mesaDeRestaurante);
    }
    else
    {
        mesas[mesa - 1].adicionaAoPedido(pedido);
    }
}

float Restaurante::calculaTotalRestaurante()
{
    float total = 0;
    for(int i = 0; i < mesas.size(); i++)
    {
        total += mesas[i].calculaTotal();
    }
    return total;
}

void Restaurante::exibeTotalRestaurante()
{
    for(int i = 0; i < mesas.size(); i++)
    {
        cout << "Mesa " << mesas[i].getMesa() << endl;
        mesas[i].exibePedidos();
    }
    cout << "Total Restaurante: R$ " << calculaTotalRestaurante() << endl;
}

int Restaurante::getMesa(int indMesa)
{
    return mesas[indMesa].calculaTotal();
}