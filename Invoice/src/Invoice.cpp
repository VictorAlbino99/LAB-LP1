#include "Invoice.h"
#include <iostream>

using namespace std;

Invoice::Invoice(int n, int q, double p, string d)
{
    setNumero(n);
    setQuantidade(q);
    setPreco(p);
    setDescricao(d);
}

int Invoice::getNumero()
{
    return n;
}

int Invoice::getQuantidade()
{
    return q;
}

double Invoice::getPreco()
{
    return p;
}

string Invoice::getDescricao()
{
    return d;
}

double Invoice::getInvoiceAmount()
{
    return q * p;
}

void Invoice::setNumero(int n)
{
    this -> n = n;
}

void Invoice::setQuantidade(int q)
{
    if(q < 1)
    {
       this -> q = 0;
    }

    else
    {
       this -> q = q;
    }

}

void Invoice::setPreco(double p)
{
    if(p < 1)
    {
        this -> p = 0;
    }

    else
    {
        this -> p = p;
    }
}

void Invoice::setDescricao(string d)
{
    this -> d = d;
}
