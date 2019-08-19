#ifndef DESPESA_H
#define DESPESA_H

#include <iostream>

class Despesa
{
    private:

        double valor;
        std::string tipoDeGasto;

    public:

        Despesa();
        double      getValor();
        std::string getTipoDeGasto();
        void        setValor(double valor);
        void        setTipoDeGasto(std::string tipoDeGasto);
};

#endif // DESPESA_H
