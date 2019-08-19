#include "ControleDeGastos.h"

using namespace std;

ControleDeGastos::ControleDeGastos()
{
    for(int i = 0; i < MAX; i++)
    {
        despesas[i] = Despesa();
    }
}

bool ControleDeGastos::setDespesas(Despesa d, int posicao)
{
    if(d.getValor() != 0)
    {
        despesas[posicao].setValor(d.getValor());
        despesas[posicao].setTipoDeGasto(d.getTipoDeGasto());

        return true;
    }

    else
    {
        return false;
    }
}

double ControleDeGastos::calculaTotalDespesas()
{
    double soma = 0;

    for(int i = 0; i < MAX; i++)
    {
        soma += despesas[i].getValor();
    }

    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo)
{
    for(int i = 0; i < MAX; i++)
    {
        if(tipo == despesas[i].getTipoDeGasto())
        {
            return true;
        }
    }

    return false;
}
