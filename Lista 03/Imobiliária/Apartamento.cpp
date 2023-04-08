#include "Apartamento.h"
Apartamento::Apartamento(int tipo)
{
    setTipo(tipo);
}

Apartamento::Apartamento()
{
    area = 0;
    quartos = 0;
    andar = 0;
    valor = 0;
    vagasGaragem = 0;
}

Apartamento::Apartamento(float area, int quartos, int andar, float valorCondominio, int vagasGaragem)
{
    setArea(area);
    setQuartos(quartos);
    setAndar(andar);
    setValor(valorCondominio);
    setVagasGaragem(vagasGaragem);
}

Apartamento::~Apartamento()
{
}

void Apartamento::setArea(float area)
{
    this->area = area;
}

void Apartamento::setQuartos(int quartos)
{
    this->quartos = quartos;
}

void Apartamento::setAndar(int andar)
{
    this->andar = andar;
}

void Apartamento::setValor(float valorCondominio)
{
    this->valor = valorCondominio;
}

void Apartamento::setVagasGaragem(int vagasGaragem)
{
    this->vagasGaragem = vagasGaragem;
}

float Apartamento::getArea()
{
    return this->area;
}

int Apartamento::getQuartos()
{
    return this->quartos;
}

int Apartamento::getAndar()
{
    return this->andar;
}

float Apartamento::getValor()
{
    return this->valorCondominio;
}

int Apartamento::getVagasGaragem()
{
    return this->vagasGaragem;
}

void Apartamento::lerAtributos()
{
    cin >> area;
    cin >> quartos;
    cin >> andar;
    cin >> valorCondominio;
    cin >> vagasGaragem;
}

void Apartamento::exibirAtributos()
{
    cout << area << "m2 de área, ";
    cout << quartos << " quartos, ";
    cout << andar << " andar(es), ";
    cout << valorCondominio << " de condomínio, ";
    cout << vagasGaragem << " vaga(s) de garagem. R$ ";
    cout << valor << "." << endl;
}

