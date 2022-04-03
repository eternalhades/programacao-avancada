#include <cstdio>
#include <iostream>
#include "Investimento.h"
#include "Conta.h"
#pragma once
class ContaCorrente : public Conta, public Investimento{
    
    public:
    ContaCorrente( float saldo, int agencia, int numero, float taxajuros) :
    Conta( saldo, agencia, numero), Investimento(taxajuros){
        std::cout << getTaxa() << std::endl;
    }
    virtual ~ContaCorrente(){}
    
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
    virtual void aplicarJurosDias(int dias, float taxajuros){
        setSaldo(_saldo + (_saldo * (dias * taxajuros)));
    }
};