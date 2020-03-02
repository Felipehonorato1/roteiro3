#ifndef CONTA_H
#define CONTA_H
#include <iostream>

using namespace std;

class Conta
{
    public:
        Conta(int num,string nome, double sd);
        void setNome(string nome);
        void setNumero(int num);
        virtual void setSaldo(double val);
        virtual void DefinirLimite();
        double getLimite();
        virtual double render();
        double getSaldo();
        string getNome();
        int getNumero();
        virtual void Sacar(double saque);
        virtual void Depositar(double deposito);

    protected:
        int numero;
        string nomeCliente;
        double saldo;
        double limite;

    private:
};

#endif // CONTA_H
