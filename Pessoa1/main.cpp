#include <iostream>
#include <stdio.h>
#include "Pessoa1.h"

using namespace std;

int main()
{
    Pessoa *a = new Pessoa1("Victor Albino","(83) 98458-6565", 20);
    Pessoa *b = new Pessoa1("Lucas Almeida");

    cout << "Nome2: "<< b -> getNome() << endl << endl;

    b -> setIdade(125);
    b -> setNome("Shimara Astrogilda");
    b -> setTelefone("(83) 98755-6451");

    cout << "Nome1: "<< a -> getNome() << "\nTelefone1: " << a -> getTelefone() << "\nIdade1: " << a -> getIdade() << endl << endl;
    cout << "Nome2: "<< b -> getNome() << "\nTelefone2: " << b -> getTelefone() << "\nIdade2: " << b -> getIdade() << endl;

    delete(a);
    delete(b);
}
