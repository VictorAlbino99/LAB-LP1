#ifndef DATA01_H
#define DATA01_H

class Data01
{
    private:
        int dia;
        int mes;
        int ano;

    public:

        /// Construtores
        Data();
        Data(int dia, int mes, int ano);

        /// Metodos get
        int  getDia();
        int  getMes();
        int  getAno();

        /// Metodos set
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        void avancarDia();
};

#endif // DATA01_H
