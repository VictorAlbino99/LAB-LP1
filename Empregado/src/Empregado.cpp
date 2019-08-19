#include "Empregado.h"

using namespace std;

Empregado::Empregado(string nome, string sobrenome, double salario)
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

Empregado::Empregado()
{
    nome = " ";
    sobrenome = " ";
    salario = 0;
}

string Empregado::getNome()
{
    return nome;
}

string Empregado::getSobrenome()
{
    return sobrenome;
}

double Empregado::getSalario()
{
    return salario;
}

void Empregado::setNome(string nome)
{
    this -> nome = nome;
}

void Empregado::setSobrenome(string sobrenome)
{
    this -> sobrenome = sobrenome;
}

void Empregado::setSalario(double salario)
{
    if(salario <= 0)
    {
        this -> salario = 1;
    }

    else
    {
        this -> salario = salario;
    }
}






