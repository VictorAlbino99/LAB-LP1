#include <iostream>
#include <stdio.h>

#include "Empregado.h"

using namespace std;

int main(void)
{
    Empregado *emp1 = new Empregado("VICTOR", "ALBINO", 7000);
    Empregado *emp2 = new Empregado();

    emp2 -> setNome("LEONARDO");
    emp2 -> setSobrenome("MEDEIROS");
    emp2 -> setSalario(6000);

    cout << "SALARIO DE " << emp1 -> getNome() << " " << emp1 -> getSobrenome() << ":     " << emp1 -> getSalario() * 12 << endl;
    cout << "SALARIO DE " << emp2 -> getNome() << " " << emp2 -> getSobrenome() << ": " << emp2 -> getSalario() * 12 << endl;

    cout << "\nSALARIO AJUSTADO DE " << emp1 -> getNome() << " " << emp1 -> getSobrenome() << ":     " << emp1 -> getSalario() * 12 * 1.1 << endl;
    cout << "SALARIO AJUSTADO DE "  << emp2 -> getNome() << " " << emp2 -> getSobrenome() << ": " << emp2 -> getSalario() * 12 * 1.1 << endl;

    delete(emp1);
    delete(emp2);
}
