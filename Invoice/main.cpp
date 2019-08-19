#include <iostream>
#include <stdio.h>

#include "Invoice.h"

using namespace std;

int main(void)
{
    Invoice *f1 = new Invoice(7,7,50,"CAMISA POLO");

    cout << "NUMERO:        " << f1->getNumero() << "\nQUANTIDADE:    " << f1 -> getQuantidade() << endl;
    cout << "PRECO INICIAL: " << f1->getPreco() << "\nDESCRICAO:     " << f1 -> getDescricao() << endl;
    cout << "\PRECO FINAL:   " << f1->getInvoiceAmount() << endl << endl;

    f1->setNumero(77);
    f1->setQuantidade(-1);
    f1->setPreco(-1);
    f1->setDescricao("CASACO");

    cout << "NUMERO:        " << f1->getNumero() << "\nQUANTIDADE:    " << f1->getQuantidade() << endl;
    cout << "PRECO:         " << f1->getPreco() << "\nDESCRICAO:     " << f1->getDescricao() << endl;

    delete(f1);
}
