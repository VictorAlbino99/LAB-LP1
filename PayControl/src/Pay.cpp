#include "Pay.h"

Pay::Pay()
{
    valorPagamento = 0;
    nomeFuncionario = " ";
}
double Pay::getValorPagamento()
{
    return valorPagamento;
}

std::string Pay::getNomeFuncionario()
{
    return nomeFuncionario;
}

void Pay::setValorPagamento(double valor)
{
    if(valor > 0)
    {
        valorPagamento = valor;
    }

    else
    {
        valorPagamento = 0;
    }
}

void Pay::setNomeFuncionario(std::string nome)
{
    nomeFuncionario = nome;
}
