#include <cstdio>
#include <iostream>
#include "Conta.h"
class ContaSalario : public Conta{
    public:
    ContaSalario(double saldo, int agencia, int numero) :
    Conta(saldo, agencia, numero){
        
    }
    
    
    void depositar (float valor) const{
        cout << "conta salario nao tem operação de depósito" << endl;
    }
    
    void retirar(float valor){
        setSaldo(_saldo - valor);
    }
    
};