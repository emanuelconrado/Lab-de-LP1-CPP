#include "Imoveis.h"

Imoveis::Imoveis()
{
    nome = "";
    valor = 0;
    tipo = 0;
    disponibilidade = "";
}

Imoveis::Imoveis(string nome, float valor, int tipo)
{
    setNome(nome);
    setValor(valor);
    setTipo(tipo);
    setDisponibilidade();
}

Imoveis::~Imoveis()
{
}

void Imoveis::setNome(string nome)
{
    this->nome = nome;
}

void Imoveis::setValor(float valor)
{
    this->valor = valor;
}

void Imoveis::setTipo(int tipo)
{   
    this->tipo = tipo;
    if(this->tipo == 0){
        setNome("Indefinido");
    }else if(this->tipo == 1){
        setNome("Casa");
    }else if(this->tipo == 2){
        setNome("Apartamento");
    }else if(this->tipo == 3){
        setNome("Terreno");
    }
}

void Imoveis::setDisponibilidade()
{
    string disponibilidade;
    getline(cin, disponibilidade);

    this->disponibilidade = disponibilidade;
}

string Imoveis::getNome()
{
    return this->nome;
}

float Imoveis::getValor()
{
    return this->valor;
}

int Imoveis::getTipo()
{
    return this->tipo;
}

string Imoveis::getDisponibilidade()
{
    return this->disponibilidade;
}

void Imoveis::exibirAtributos()
{
    cout << getNome() << " para " << getDisponibilidade() << ". "; 
}

