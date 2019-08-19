#include <iostream>
#include <stdio.h>
#include "ControleDeGastos.h"
#include "Despesa.h"

using namespace std;

int main(void)
{
    Despesa *d1 = new Despesa();
    Despesa *d2 = new Despesa();

    d1 -> setValor(10);
    d1 -> setTipoDeGasto("Almoco");

    cout << "GASTO 1: " << d1 -> getValor() << "\nTIPO  1: " << d1 -> getTipoDeGasto() << endl;

    d2 -> setValor(50);
    d2 -> setTipoDeGasto("Gasolina");

    cout << "GASTO 2: " << d2 -> getValor() << "\nTIPO  2: " << d2 -> getTipoDeGasto() << endl << endl;

    ControleDeGastos *cd = new ControleDeGastos();
    cd -> setDespesas(*d1, 4);
    cd -> setDespesas(*d2, 7);

    cout << "TOTAL: " << cd -> calculaTotalDespesas() << endl;

    if(cd -> existeDespesaDoTipo("Almoco"))
    {
        cout << "\nEXISTE" << endl;
    }

    else
    {
        cout << "NAO EXISTE" << endl;
    }

    delete(d1);
    delete(d2);
}
