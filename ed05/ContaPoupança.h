#include <cstdio>
#include <iostream>
#include "Investimento.h"
#include "Conta.h"
using namespace std;
class ContaPoupanca : public Conta, public Investimento{
    
    public:
    ContaPoupanca( double saldo, int agencia, int numero, double taxajuros) :
    Conta(cliente, saldo, agencia, numero), Investimento(taxajuros){}
    
    void imprimirSaldo() const{
    cout << _saldo<< endl;
    }
    
    void retirar(double valor){
        setSaldo(_saldo - valor);
    }
    void imprimirInvestimento() const{
        cout << getTaxa() << endl;
        cout << getSaldo() << endl;
        cout << getAgencia() << endl;
        cout << getNumero() << endl;
    }
    
    void aplicarJurosDias(int dias, double taxajuros){
        setSaldo(_saldo + (_saldo * (dias * taxajuros)));
    }
};