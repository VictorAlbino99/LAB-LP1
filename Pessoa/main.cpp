#include <iostream>
#include <stdio.h>
#include "Pessoa.h"

using namespace std;

int main(void)
{
    Pessoa *p1 = new Pessoa("JOAO DA SILVA","998772548", 50);
    Pessoa *p2 = new Pessoa("MARIA DA SILVA");

    p2->setIdade(47);
    p2->setNome("JOSE DE OLIVEIRA");
    p2->setTelefone("998745412");

    cout << "NOME 1:     "<< p1 -> getNome() << "\nTELEFONE 1: " << p1 -> getTelefone() << "\nIDADE 1:    " << p1 -> getIdade() << endl << endl;
    cout << "NOME 2:     "<< p2 -> getNome() << "\nTELEFONE 2: " << p2 -> getTelefone() << "\nIDADE 2:    " << p2 -> getIdade() << endl;

    delete(p1);
    delete(p2);
}
