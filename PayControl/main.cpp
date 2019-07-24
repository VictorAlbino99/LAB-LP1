#include <iostream>
#include <stdio.h>
#include "PayControl.h"
#include "Pay.h"

using namespace std;

int main()
{
    PayControl *controlPag = new PayControl();

    controlPag -> setPagamentos("Victor Albino", 910);
    controlPag -> setPagamentos("Victor Albino", 1000);
    controlPag -> setPagamentos("Victor Albino", 1500);

    cout << "Total pago: " << controlPag -> calculaTotalDePagamentos() << endl;

    if(controlPag -> existePagamentoParaFuncionario("Victor Albino"))
    {
        cout << "Existe pagamento" << endl;
    }

    else
    {
       cout << "Nao existe pagamento" << endl;
    }


    if(controlPag -> existePagamentoParaFuncionario("Joao Tota"))
    {
        cout << "Existe pagamento" << endl;
    }

    else
    {
        cout << "Nao existe pagamento" << endl;
    }

    delete(controlPag);
}
