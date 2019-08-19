#include "Despesa.h"

using namespace std;

Despesa::Despesa()
{
    valor = 0;
    tipoDeGasto = " ";
}

double Despesa::getValor()
{
    return valor;
}

string Despesa::getTipoDeGasto()
{
    return tipoDeGasto;
}

void Despesa::setValor(double valor)
{
    if(valor < 0)
    {
       this -> valor = 0;
    }

    else
    {
        this -> valor = valor;
    }
}

void Despesa::setTipoDeGasto(string tipoDeGasto)
{
    this -> tipoDeGasto = tipoDeGasto;
}
