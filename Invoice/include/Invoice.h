#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>

using namespace std;

class Invoice
{
    private:
        int    numero;
        int    qtde;
        double preco;
        string descricao;

    public:
        invoice(int numero, int qtde, double preco, string descricao);
        int    getNumero();
        int    getQtde();
        double getPreco();
        string getDescricao();
        double getInvoiceAmount();
        void   setNumero(int numItem);
        void   setQtde(int qItem);
        void   setPreco(double precoItem);
        void   setDescricao(string descricao);
} ;

#endif // INVOICE_H
