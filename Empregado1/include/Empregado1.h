#ifndef EMPREGADO1_H
#define EMPREGADO1_H

#include <iostream>

class Empregado1
{
    private:
        std::string nome;
        std::string sobrenome;
        double salario;

    public:
        Empregado1();
        Empregado1(std::string nome, std::string sobrenome, double valor);
        std::string getNome();
        std::string getSobrenome();
        double getSalario();
        void setNome(std::string nome);
        void setSobrenome(std::string sobrenome);
        void setSalario(double salario);
};

#endif // EMPREGADO1_H
