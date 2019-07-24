#include <iostream>
#include <stdio.h>
#include "Empregado1.h"

using namespace std;

int main()
{
    Empregado1 *a = new Empregado1("Victor", "Albino", 5000);
    Empregado1 *b = new Empregado1();

    b -> setNome("Lucas");
    b -> setSobrenome("Alves");
    b -> setSalario(6000);

    cout << "Salario anual de " << a -> getNome() << " " << a -> getSobrenome() << ": " << a -> getSalario() * 12 << endl;
    cout << "Salario anual de " << b -> getNome() << " " << b -> getSobrenome() << ": " << b -> getSalario() * 12 << endl;

    cout << "Salario anual pos aumento de 10% de " << a -> getNome() << " " << a -> getSobrenome() << ": " << a -> getSalario() * 12 * 1.1 << endl;
    cout << "Salario anual pos aumento de 10% de " << b -> getNome() << " " << b -> getSobrenome() << ": " << b -> getSalario() * 12 * 1.1 << endl;

    delete(a);
    delete(b);
}
