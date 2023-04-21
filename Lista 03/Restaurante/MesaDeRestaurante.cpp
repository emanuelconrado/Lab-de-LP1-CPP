#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    //ctor
}

MesaDeRestaurante::~MesaDeRestaurante()
{
    //dtor
}

void MesaDeRestaurante::adicionaAoPedido(Pedido pedido)
{
    if(pedidos.size() > 0)
    {
        for(int i = 0; i < pedidos.size(); i++)
        {
            if(pedidos[i].getNumero() == pedido.getNumero())
            {
                pedidos[i].setQuantidade(pedidos[i].getQuantidade() + pedido.getQuantidade());
                return;
            }
        }
    }

    pedidos.push_back(pedido);
}

void MesaDeRestaurante::zeraPedidos()
{
    pedidos.clear();
}

float MesaDeRestaurante::calculaTotal()
{
    float total = 0;
    for(int i = 0; i < pedidos.size(); i++)
    {
        total += pedidos[i].getTotal();
    }
    return total;
}

void MesaDeRestaurante::exibePedidos()
{
    for(int i = 0; i < pedidos.size(); i++)
    {
        cout << pedidos[i].getNumero() << " - " << pedidos[i].getDescricao() << " - " << pedidos[i].getQuantidade() << " - " << pedidos[i].getPreco() << " - R$ " << pedidos[i].getTotal() << endl;
    }
    cout << "Total: R$ " << calculaTotal() << endl;
    cout << "" << endl;
}

void MesaDeRestaurante::setMesa(int mesa)
{
    this->mesa = mesa;
}

int MesaDeRestaurante::getMesa()
{
    return mesa;
}