#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

class Pessoa
{
    private:

        std::string nome;
        std::string telefone;
        int         idade;

    public:

        Pessoa(std::string nome);
        Pessoa(std::string nome, std::string telefone, int idade);
        std::string getNome();
        std::string getTelefone();
        int         getIdade();
        void        setNome(std::string nome);
        void        setTelefone(std::string telefone);
        void        setIdade(int idade);
};

#endif // PESSOA_H
