#include <iostream>
#include <stdio.h>
#include "Data.h"

#define MAX 48

using namespace std;

int main(void)
{
    Data *d1 = new Data();
    Data *d2 = new Data();
    Data *d3 = new Data(5,1,-7);

    d1 -> setDia(7);
    d1 -> setMes(7);
    d1 -> setAno(2019);

    for(int i = 1; i < MAX; i++)
    {
        cout << "DATA 1: " << d1 -> getDia() << "/" << d1 -> getMes() << "/" << d1 -> getAno() << endl;

        d1 -> avancarDia();
    }

    cout << endl;
    cout << "DATA 2: " << d2 -> getDia() << "/" << d2 -> getMes() << "/" << d2 -> getAno() << endl << endl;
    cout << "DATA 3: " << d3 -> getDia() << "/" << d3 -> getMes() << "/" << d3 -> getAno() << endl;

    delete(d1);
    delete(d2);
    delete(d3);
}
