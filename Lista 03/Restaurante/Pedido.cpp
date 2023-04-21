#include "Pedido.h"

Pedido::Pedido()
{
    numero = 0;
    descricao = "";
    quantidade = 0;
    preco = 0;
}

Pedido::Pedido(int numero, string descricao, int quantidade, float preco)
{
    this->numero = numero;
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->preco = preco;
}

Pedido::~Pedido()
{
    //dtor
}

int Pedido::getNumero()
{
    return numero;
}

string Pedido::getDescricao()
{
    return descricao;
}

int Pedido::getQuantidade()
{
    return quantidade;
}

float Pedido::getPreco()
{
    return preco;
}

void Pedido::setNumero(int numero)
{
    this->numero = numero;
}

void Pedido::setDescricao(string descricao)
{
    this->descricao = descricao;
}

void Pedido::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

void Pedido::setPreco(float preco)
{
    this->preco = preco;
}

float Pedido::getTotal()
{
    return quantidade * preco;
}
