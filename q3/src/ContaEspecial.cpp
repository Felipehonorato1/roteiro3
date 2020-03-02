#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(int num, string nome, double sd,double sal):ContaCorrente(num,nome,sd,sal)
{
}

void ContaEspecial::DefinirLimite(){
    limite = salary*4;
}
