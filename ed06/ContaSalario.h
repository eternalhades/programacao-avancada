#include <cstdio>
#include <iostream>
#include "Conta.h"
#pragma once
class ContaSalario : public Conta{
    public:
    ContaSalario(float saldo, int agencia, int numero) :
    Conta(saldo, agencia, numero){
        
    }
    
    virtual ~ContaSalario(){}
    
    void depositar (float valor) const{
        std::cout << "conta salario nao tem operação de depósito" << std::endl;
    }
    
        
    
    void retirar(float valor){
        setSaldo(_saldo - valor);
    }
    
};