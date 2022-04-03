#include <cstdio>
#include <iostream>
#include "Conta.h"
#pragma once
class Banco: public Conta{
    public:
    Conta _contas;
    
    public:
    
    Banco(Conta contas) : _contas(contas){}
    
     /*void imprimirContas(Conta *contas){
        for(int i = 0; i< _numerocontas; i++){
        std::cout << contas[i].getSaldo() << std::endl;
        std::cout << contas[i].getAgencia() << std::endl;
        std::cout << contas[i].getNumero() << std::endl;
        }
    }*/
    
   
    
};