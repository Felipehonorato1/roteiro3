#include "ContaCorrente.h"
#include "Conta.h"

ContaCorrente::ContaCorrente(int num, string nome, double sd,double sal):Conta(num,nome,sd)
{
    salary = sal;

}

void ContaCorrente::DefinirLimite()
{
    limite = 2*salary;
}

double ContaCorrente::getSalario()
{
    return salary;

}
void ContaCorrente::setSalario(double sl)
{
    salary = sl;


}
