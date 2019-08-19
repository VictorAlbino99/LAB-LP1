#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(string nome)
{
    this -> nome = nome;
}

Pessoa::Pessoa(string nome, string telefone, int idade)
{
    setNome(nome);
    setTelefone(telefone);
    setIdade(idade);
}

string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getTelefone()
{
    return telefone;
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::setNome(string nome)
{
    this -> nome = nome;
}

void Pessoa::setTelefone(string telefone)
{
    this -> telefone = telefone;
}

void Pessoa::setIdade(int idade)
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





