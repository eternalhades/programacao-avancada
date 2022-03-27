#include <cstdio>
#include <iostream>
using namespace std;
class Conta{
public:
    double _saldo;
    int _agencia;
    int _numero;
public:
    Conta(){
        cout<< "instanciando conta" << endl;
    }
    
    Conta( double saldo = 0.00, int agencia = 0, int numero = 0):
        _saldo(saldo),
        _agencia(agencia),
        _numero(numero){
        cout << getSaldo() << endl;
        cout << getAgencia() << endl;
        cout << getNumero() << endl;
        }
        
     void imprimirSaldo() const{
    cout << _saldo<< endl;
    }
    double  getSaldo() const{
     return _saldo;
    }
    int getAgencia() const{
        return _agencia;
    }
    int getNumero() const{
        return _numero;
    }
    void setSaldo(double saldo){
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