#include <cstdio>
#include <iostream>
#pragma once
class Conta{
public:
    float _saldo;
    int _agencia;
    int _numero;
public:
    Conta( float saldo = 0.00, int agencia = 0, int numero = 0):
        _saldo(saldo),
        _agencia(agencia),
        _numero(numero){
        std::cout << getSaldo() << std::endl;
        std::cout << getAgencia() << std::endl;
        std::cout << getNumero() << std::endl;
        }
    virtual ~Conta(){}
    
    virtual void aplicarJurosDias(int dias, float taxajuros);
    
    void imprimirSaldo() const{
        std::cout << _saldo<< std::endl;
    }
    float  getSaldo() const{
        return _saldo;
    }
    int getAgencia() const{
        return _agencia;
    }
    int getNumero() const{
        return _numero;
    }
    void setSaldo(float saldo){
        _saldo= saldo;
    }
    void setAgencia(int agencia){
        _agencia = agencia;
    }   
    void setNumero(int numero){
        _numero = numero;
    }
    
    void retirar(double valor){
        setSaldo(_saldo - valor);
    }
    void depositar(double valor){
        setSaldo(_saldo + valor);
    }
};

