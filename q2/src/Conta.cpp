#include "Conta.h"
using namespace std;

Conta::Conta(int num,string nome, double salario, double sd){
    numero = num;
    nomeCliente = nome;
    salarioMensal = salario;
    saldo = sd;
}
void Conta::setSalario(double val){
    salarioMensal = val;
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
void Conta::DefinirLimite(){
    limite = salarioMensal*2;
}
double Conta::getSalario(){
    return salarioMensal;
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
    saldo = saldo - saque;
}
void Conta::Depositar(double deposito){
    saldo = saldo + deposito;
}
