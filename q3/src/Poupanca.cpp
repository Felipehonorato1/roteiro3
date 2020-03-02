#include "Poupanca.h"

Poupanca::Poupanca(int var,double tx, int num, string nm, double sald):Conta(num,nm,sald)
{
    variacao = var;
    taxaRendimento = tx;
}

double Poupanca::render()
{
    if(variacao == 51)
        saldo *= (1+ (taxaRendimento/100));
    if(variacao == 1)
    {
        saldo *=(1+(taxaRendimento/100));
        taxaRendimento += 0.5/100;
    }
    return saldo;
}


int Poupanca::getVar(){
    return variacao;
}
double Poupanca::getTax(){
    return taxaRendimento;
}
void Poupanca::setVar(int var){
    variacao = var;
}
void Poupanca::setTax(double tax){
    taxaRendimento = tax;
}

