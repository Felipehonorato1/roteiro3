#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    cout << "CONTA NORMAL COM SALARIO DE 1500" << endl;
    Conta *c1 = new Conta(123,"Felipe",1500,300);
    c1->DefinirLimite();
    cout << "Nome:" << c1->getNome() << endl;
    cout << "Limite: " <<c1->getLimite() << endl;
    cout << "Saldo: " << c1->getSaldo() << endl;
    c1->Depositar(700);
    cout << "PÓS DEPOSITO DE 700 : " << c1->getSaldo() << endl;

    cout << "\n\nCONTA ESPECIAL COM SALARIO DE 1000: " << endl;
    Conta *c2 = new ContaEspecial(77,"honorato",1000,230);
    c2->DefinirLimite();
    cout << "Nome:" << c2->getNome() << endl;
    cout << "Limite: " <<c2->getLimite() << endl;
    cout << "Saldo: " << c2->getSaldo() << endl;
    c2->Depositar(1000);
    cout << "APOS DEPOSITAR 1000:  " << c2->getSaldo() << endl;
    c2->Sacar(230);
    cout << "APOS SACAR 230: " << c2->getSaldo() << endl;
}
