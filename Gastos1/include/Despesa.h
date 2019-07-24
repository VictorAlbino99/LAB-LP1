#ifndef DESPESA_H
#define DESPESA_H

#include <iostream>

class Despesa
{
    private:
        double valor;
        std::string tipo;

    public:
        Despesa();
        double getValor();
        std::string getTipo();
        void setValor(double valor);
        void setTipo(std::string tipo);
};

#endif // DESPESA_H
