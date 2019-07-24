#include "Empregado1.h"

Empregado1::Empregado1(std::string nome, std::string sobrenome, double salario)
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

Empregado1::Empregado1()
{
    nome = " ";
    sobrenome = " ";
    salario = 0;
}

std::string Empregado1::getNome()
{
    return nome;
}

std::string Empregado1::getSobrenome()
{
    return sobrenome;
}

double Empregado1::getSalario()
{
    return salario;
}

void Empregado1::setNome(std::string nome)
{
    this -> nome = nome;
}

void Empregado1::setSobrenome(std::string sobrenome)
{
    this -> sobrenome = sobrenome;
}

void Empregado1::setSalario(double salario)
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
