#include "Data.h"
#include <iostream>

using namespace std;

Data::Data()
{
    d = 1;
    m = 1;
    a = 1;
}

Data::Data(int d, int m, int a)
{
    setDia(d);
    setMes(m);
    setAno(a);
}

int Data::getDia()
{
    return d;
}

int Data::getMes()
{
    return m;
}

int Data::getAno()
{
    return a;
}

void Data::setDia(int d)
{
    if(d < 1 || d > 31)
    {
        this -> d = 1;
    }

    else
    {
        this -> d = d;
    }
}

void Data::setMes(int m)
{
    if(m < 1 || m > 12)
    {
        this -> m = 1;
    }

    else
    {
        this -> m = m;
    }
}

void Data::setAno(int a)
{
    if(a < 1)
    {
        this -> a = 1;
    }

    else
    {
        this -> a = a;
    }
}

void Data::avancarDia()
{
    if(d >= 30 && (m == 4 || m == 6 || m == 9 || m == 11))
    {
        setDia(1);
        setMes(m + 1);
    }

    else if(d >= 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
    {
        if(m == 12)
        {
            setDia(1);
            setMes(1);
            setAno(getAno() + 1);
        }

        else
        {
            setDia(1);
            setMes(m + 1);
        }
    }

    else if(d >= 28 && m == 2)
    {
        setDia(1);
        setMes(m + 1);
    }

    else
    {
        setDia(d + 1);
    }
}
