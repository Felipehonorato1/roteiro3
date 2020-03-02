#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"

class ContaEspecial: public ContaCorrente
{
    public:
        ContaEspecial(int num, string nome, double sd,double sal);
        virtual void DefinirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
