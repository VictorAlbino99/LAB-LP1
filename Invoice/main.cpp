#include <iostream>
#include <stdio.h>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice *Item = new Invoice(100, 3, 5.30,"Feijao Preto");

    cout << "Numero: "      << Item->getNumero()        << "\nQuantidade: "  << Item->getQtde()      << endl;
    cout << "Preco: "       << Item->getPreco()         << "\nDescricao:  "  << Item->getDescricao() << endl;
    cout << "Preco final: " << Item->getInvoiceAmount() << endl << endl;

    Item->setNumero(7);
    Item->setQtde(-1);
    Item->setPreco(-2);
    Item->setDescricao("Descricao");

    cout << "Numero: "   << Item->getNumero() << "\nQuantidade: " << Item->getQtde()      << endl;
    cout << "Preco: "    << Item->getPreco()  << "\nDescricao: "  << Item->getDescricao() << endl;

    delete(Item);
}
