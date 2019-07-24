#include <iostream>
#include "Invoice.h"

Invoice::Invoice(int numero, int qtde, double preco, string descricao)
{
    setNumero(numero);
    setQtde(qtde);
    setPreco(preco);
    setDescricao(descricao);
}




int Invoice::getNumero()
{
    return numero;
}





int Invoice::getQtde()
{
    return qtde;
}




double Invoice::getPreco()
{
    return preco;
}




string Invoice::getDescricao()
{
    return descricao;
}




double Invoice::getInvoiceAmount()
{
    return qtde * preco;
}




void Invoice::setNumero(int numero)
{
    this -> numero = numero;
}




void Invoice::setQtde(int qtde)
{
    if(qtde < 1)
    {
        this -> qtde = 0;
    }

    else
    {
        this -> qtde = qtde;
    }

}




void Invoice::setPreco(double preco)
{
    if(preco < 1)
    {
        this -> preco = 0;
    }

    else
    {
        this -> preco = preco;
    }

}




void Invoice::setDescricao(string descricao)
{
    this -> descricao = descricao;
}
