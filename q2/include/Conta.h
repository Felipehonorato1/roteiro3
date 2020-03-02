#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <iostream>

using namespace std;

class Conta: public IConta
{
    public:
        Conta(int num,string nome, double salario, double sd);
        void setSalario(double val);
        void setNome(string nome);
        void setNumero(int num);
        void setSaldo(double val);
        virtual void DefinirLimite();
        double getSalario();
        double getLimite();
        double getSaldo();
        string getNome();
        int getNumero();
        virtual void Sacar(double saque);
        virtual void Depositar(double deposito);

    protected:
        int numero;
        string nomeCliente;
        double salarioMensal, saldo,limite;

    private:
};

#endif // CONTA_H
