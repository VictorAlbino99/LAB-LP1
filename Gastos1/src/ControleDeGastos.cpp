#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos()
{
    for(int i = 0; i < MAX; i++)
    {
        despesa1[i] = Despesa();
    }
}

bool ControleDeGastos::setDespesas(Despesa d, int pos)
{
    if(d.getValor() != 0)
    {
        despesa1[pos].setValor(d.getValor());
        despesa1[pos].setTipoDeGasto(d.getTipoDeGasto());

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
        soma = soma + despesa1[i].getValor();
    }

    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string tipo)
{
    for(int i = 0; i < MAX; i++)
    {
        if(tipo == despesa1[i].getTipoDeGasto())
        {
            return true;
        }
    }

    return false;
}
