#ifndef CONTROLEPAGAMENTO_H
#define CONTROLEPAGAMENTO_H
#include "Pay.h"

#define MAX 100

class controlePagamento
{
    private:
        Pay p[MAX];

    public:
        controlePagamento();
        void setPagamentos(std::string nomeFuncionario, double valorPagamento);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario (std::string nomeFuncionario);
        int VerificaIndiceDisponivel();
};

#endif // CONTROLEPAGAMENTO_H
