#include "Pagamento.h"

Pagamento::Pagamento(){
    setValorPagamento(0);
}
void Pagamento::setValorPagamento(float Pagamento){
    valorPagamento = Pagamento;
}
void Pagamento::setNomeDoFuncionario(string nome){
    nomeDoFuncionario = nome;
}
float Pagamento::getValorPagamento(){
    return valorPagamento;
}
string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}