#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>

class Invoice
{
private:
    int numero;
    std::string descricao;
    int quant;
    float preco;
public:
    Invoice();
    float getInvoiceAmount();
    void printInvoice();
    void setNumero(int numero);
    int getNumero();
    void setDescricao(std::string descricao);
    std::string getDescricao();
    void setQuant(int quant);
    int getQuant();
    void setPreco(float preco);
    float getPreco();
};



#endif