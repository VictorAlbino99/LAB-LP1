#include <iostream>
#include <stdio.h>
#include "data.h"

#define TESTE 63 //2 meses

using namespace std;

int main(){
    Data *d1 = new Data();
    Data *d2 = new Data();
    Data *d3 = new Data(15,2,-1);

    d1->setDia(1);
    d1->setMes(11);
    d1->setAno(2019);

    for(int i = 1; i < TESTE; i++){
        cout << "A data 1 eh: " << d1->getDia() << "/" << d1->getMes() << "/" << d1->getAno() << endl;
        d1->avancarDia();
       //getchar();
    }
    cout << endl;
    cout << "A data 2 eh: " << d2->getDia() << "/" << d2->getMes() << "/" << d2->getAno() << endl << endl;
    cout << "A data 3 eh: " << d3->getDia() << "/" << d3->getMes() << "/" << d3->getAno() << endl;

    delete(d1);
    delete(d2);
    delete(d3);
}
