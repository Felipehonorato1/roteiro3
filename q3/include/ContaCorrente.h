#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"

using namespace std;

class ContaCorrente: public Conta
{
    public:
        ContaCorrente(int num, string nome, double sd,double sal);
        virtual void DefinirLimite();
        double getSalario();
        void setSalario(double sl);
    protected:
        double salary;
    private:
};

#endif // CONTACORRENTE_H
