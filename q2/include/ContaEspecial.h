#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"



class ContaEspecial: public Conta
{
    public:
        ContaEspecial(int num,string nome, double salario, double sd):Conta(num,nome,salario,sd){};
        virtual void DefinirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
