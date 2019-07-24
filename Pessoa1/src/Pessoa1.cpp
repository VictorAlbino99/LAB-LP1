#include "Pessoa1.h"
#include <iostream>

Pessoa1::Pessoa1(string nome)
{
    this -> nome = nome;
}

Pessoa1::Pessoa1(string nome, string telefone, int idade)
{
    setNome(nome);
    setTelefone(telefone);
    setIdade(idade);
}

string Pessoa1::getNome()
{
    return nome;
}

string Pessoa1::getTelefone()
{
    return telefone;
}

int Pessoa1::getIdade()
{
    return idade;
}

void Pessoa1::setNome(string nome)
{
    this -> nome = nome;
}

void Pessoa1::setTelefone(string telefone)
{
    this -> telefone = telefone;
}

void Pessoa1::setIdade(int idade)
{
    if(idade < 1)
    {
        this -> idade = 1;
    }

    else
    {
        this -> idade = idade;
    }

}







