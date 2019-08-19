#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include "Despesa.h"
#include <iostream>

#define MAX 100

class ControleDeGastos
{
    private:

        Despesa despesas[MAX];

    public:

        ControleDeGastos();
        double calculaTotalDespesas();
        bool   setDespesas(Despesa d, int posicao);
        bool   existeDespesaDoTipo(std::string tipo);
};

#endif // CONTROLEDEGASTOS_H
