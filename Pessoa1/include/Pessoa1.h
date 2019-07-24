#ifndef PESSOA1_H
#define PESSOA1_H

#include <iostream>

class Pessoa1
{
    private:
        string nome;
        int idade;
        string telefone;

    public:
        Pessoa1(string nome);
        Pessoa1(string nome, int idade, string telefone);
        string getNome();
        int getIdade();
        string getTelefone();
        void setNome(string nome);
        void setIdade(int idade);
        void setTelefone(string telefone);
};

#endif // PESSOA1_H
