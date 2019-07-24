#include "Despesa.h"

Despesa::Despesa()
{
    valor = 0;
    tipo = " ";
}

double Despesa::getValor()
{
    return valor;
}

std::string Despesa::getTipo()
{
    return tipo;
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

void Despesa::setTipo(std::string tipo)
{
    this -> tipo = tipo;
}
