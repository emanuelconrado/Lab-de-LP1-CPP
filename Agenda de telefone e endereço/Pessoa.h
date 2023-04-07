#include "Endereco.h"
using namespace std;

class Pessoa
{
private:
    string nome, telefone;
    Endereco endereco;
public:
    Pessoa();
    Pessoa(string nome);
    Pessoa(string nome, Endereco endereco, Endereco, string telefone);
    void setNome(string nome);
    void setTelefone(string telefone);
    void setEndereco(Endereco endereco);
    string getNome();
    string getTelefone();
    Endereco getEndereco();
    string toString();
};