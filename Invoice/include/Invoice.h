#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>

class Invoice
{
    private:

        int         n;
        int         q;
        double      p;
        std::string d;

    public:

        Invoice(int n, int q, double p, std::string d);
        int         getNumero();
        int         getQuantidade();
        double      getPreco();
        std::string getDescricao();
        double      getInvoiceAmount();
        void        setNumero(int n);
        void        setQuantidade(int q);
        void        setPreco(double p);
        void        setDescricao(std::string d);

};

#endif // INVOICE_H
