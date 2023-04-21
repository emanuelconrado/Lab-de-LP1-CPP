#include "MesadeRestaurante.h"

class Restaurante
{
private:
    vector<MesaDeRestaurante> mesas;
public:
    Restaurante();
    ~Restaurante();
    void adicionaAoPedido(Pedido pedido, int mesa);
    float calculaTotalRestaurante();
    void exibeTotalRestaurante();
    int getMesa(int indMesa);
};