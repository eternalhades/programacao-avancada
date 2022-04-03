#include <cstdio>
#include <iostream>
#include "Investimento.h"
#include "Conta.h"
#pragma once
class ContaPoupanca : public Conta, public Investimento{
    
    public:
    ContaPoupanca(float saldo, int agencia, int numero, float taxajuros) :
        Conta(saldo, agencia, numero), Investimento(taxajuros){}
    
    
    virtual ~ContaPoupanca(){}
    
    void imprimirSaldo() const{
        std::cout << _saldo<< std::endl;
    }
    
    void retirar(double valor){
        setSaldo(_saldo - valor);
    }
    
    
    void imprimirInvestimento() const{
        std::cout << getTaxa() << std::endl;
        std::cout << getSaldo() << std::endl;
        std::cout << getAgencia() << std::endl;
        std::cout << getNumero() << std::endl;
    }
    
    void aplicarJurosDias(int dias, double taxajuros){
        setSaldo(_saldo + (_saldo * (dias * taxajuros)));
    }
};