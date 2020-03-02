#include "Conta.h"
using namespace std;

Conta::Conta(int num,string nome, double sd){
    numero = num;
    nomeCliente = nome;
    saldo = sd;
}

void Conta::setNome(string nome){
    nomeCliente = nome;
}
void Conta::setNumero(int num){
    numero = num;
}
void Conta::setSaldo(double val){
    saldo = val;
}

double Conta::getLimite(){
    return limite;
}
double Conta::getSaldo(){
    return saldo;
}
string Conta::getNome(){
    return nomeCliente;
}
int Conta::getNumero(){
    return numero;
}
void Conta::Sacar(double saque){
    if(saque > saldo) cout << "Saldo insuficiente." << endl;
    else
    saldo = saldo - saque;
}
void Conta::Depositar(double deposito){
    saldo = saldo + deposito;
}

void Conta::DefinirLimite(){
//s
}
 double Conta::render(){
//s
}
