#include <iostream>
#include <stdio.h>
#include "ControleDeGastos.h"
#include "Despesa.h"

using namespace std;

int main()
{
    Despesa *a = new Despesa();
    Despesa *b = new Despesa();

    a -> setValor(7);
    a -> setTipo("Taxi");
    cout << "Valor despesa 1: " << a -> getValor() << "\nTipo despesa 1: " << a -> getTipo() << endl;

    b -> setValor(14);
    b -> setTipo("Uber");
    cout << "Valor despesa 2: " << b -> getValor() << "\nTipo despesa 2: " << b -> getTipo() << endl << endl;

    ControleDeGastos *cd = new ControleDeGastos();

    cd -> setDespesas(*a, 3);
    cd -> setDespesas(*b, 5);

    cout << "Total de despesas: " << cd -> calculaTotalDespesas() << endl;

    if(cd -> existeDespesaDoTipo("Taxi"))
    {
        cout << "Existe" << endl;
    }

    else
    {
        cout << "Nao existe" << endl;
    }

    delete(a);
    delete(b);
}
