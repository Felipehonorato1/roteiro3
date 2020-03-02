#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"



class Poupanca:public Conta
{
    public:
        Poupanca(int var,double tx, int num, string nm, double sald);
        double render();
        int getVar();
        double getTax();
        void setVar(int var);
        void setTax(double tax);

    protected:

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANCA_H
