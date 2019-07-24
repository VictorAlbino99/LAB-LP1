#include "PayControl.h"

PayControl::PayControl()
{
    for(int i = 0; i<MAX; i++)
    {
        p[i].setValorPagamento(0);
        p[i].setNomeFuncionario(" ");
    }
}

void PayControl::setPagamentos(std::string nomeFuncionario, double valorPagamento)
{
    int aux = VerificaIndiceDisponivel();

    p[aux].setNomeFuncionario(nomeFuncionario);
    p[aux].setValorPagamento(valorPagamento);
}

double PayControl::calculaTotalDePagamentos()
{
    double soma = 0;

    for(int i = 0; i < MAX; i++)
    {
        soma = soma + p[i].getValorPagamento();
    }

    return soma;
}

bool PayControl::existePagamentoParaFuncionario (std::string nomeFuncionario)
{
    for(int i = 0; i < MAX; i++)
    {
        if(p[i].getNomeFuncionario() == nomeFuncionario)
        {
            return true;
        }
    }

    return false;
}

int PayControl::VerificaIndiceDisponivel()
{
    for(int i = 0; i < MAX; i++)
    {
        if(p[i].getValorPagamento() == 0)
        {
            return i;
        }
    }

    return 0;
}







