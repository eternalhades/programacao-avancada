#include <cstdio>
#include <iostream>

class Conta{
private:
    Cliente _cliente;
    double _saldo;
    int _agencia;
    int _numero;
public:
    Conta(){}
    
    Conta(Cliente cliente, double saldo, int agencia, int numero):
        _cliente(cliente),
        _saldo(saldo),
        _agencia(agencia),
        _numero(numero){}
        
     void imprimirSaldo() const{
    cout << getSaldo()<< endl;
    }
    double  getSaldo() const{
     return _saldo;
    }
    Cliente getCliente() const{
        return _cliente;
    }
    int getAgencia() const{
        return _agencia;
    }
    int getNumero() const{
        return _numero;
    }
    void setCliente(Cliente cliente){
       _cliente = cliente;
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
    void alterarCliente(Cliente cliente){
        setCliente(cliente);
    }
    
     void retirar(float valor){
        setSaldo(_saldo - valor);
    }
    void depositar(float valor){
        setSaldo(_saldo + valor);
    }
};

