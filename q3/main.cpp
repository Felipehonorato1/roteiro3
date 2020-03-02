#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    //ContaCorrente *g1 = new ContaCorrente(1500,"rico",4000,2000);
    ContaCorrente *c1 = new ContaCorrente(1200,"lulinha",1000,1930);
    c1->DefinirLimite();
    cout << c1->getLimite() << endl;
    ContaEspecial *c2 = new ContaEspecial(1500,"honorato",1200,100);
    c2->DefinirLimite();
    cout << "Nome: " << c2->getNome() << "Salario: " << c2->getSalario() << endl;
    cout <<"Limite: "<<  c2->getLimite() << endl;
    cout << "Tentando sacar 1600 numa conta que tem 1200" << endl;
    c2->Sacar(1600);
    Poupanca *p = new Poupanca(51,80,123,"Carlos",1000);
    cout <<"Depois do rendimento, o saldo eh: " <<  p->render() << endl;


    return 0;
}
