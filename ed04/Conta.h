#include <cstdio>
#include <iostream>

class Conta{
private:
    Cliente _cliente;
    double _saldo;
    int _agencia;
    int _numero;
public:
    Conta(){
        cout<< "instanciando conta" << endl;
    }
    
    Conta(Cliente cliente, double saldo = 0.00, int agencia = 0, int numero = 0):
        _cliente(cliente),
        _saldo(saldo),
        _agencia(agencia),
        _numero(numero){
        cout << getSaldo() << endl;
        cout << getAgencia() << endl;
        cout << getNumero() << endl;
        }
        
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

