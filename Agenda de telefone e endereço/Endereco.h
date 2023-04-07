#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
using namespace std;


class Endereco
{
private:
    string rua, bairro, cidade, estado, numero, cep;
public:
    Endereco();
    Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep);
    string toString();
};

#endif