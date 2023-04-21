#include "Pedido.h"

class MesaDeRestaurante
{
private:
    vector<Pedido> pedidos;
    int mesa;
public:
    MesaDeRestaurante();
    ~MesaDeRestaurante();
    void adicionaAoPedido(Pedido pedido);
    void zeraPedidos();
    float calculaTotal();
    void exibePedidos();
    void setMesa(int mesa);
    int getMesa();
};