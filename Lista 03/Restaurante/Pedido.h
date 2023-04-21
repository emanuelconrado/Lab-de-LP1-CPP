#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pedido
{
private:
    int numero;
    string descricao;
    int quantidade;
    float preco;
public:
    Pedido();
    Pedido(int numero, string descricao, int quantidade, float preco);
    ~Pedido();
    int getNumero();
    string getDescricao();
    int getQuantidade();
    float getPreco();
    void setNumero(int numero);
    void setDescricao(string descricao);
    void setQuantidade(int quantidade);
    void setPreco(float preco);
    float getTotal();
};




#endif // PEDIDO_H