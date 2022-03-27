#include <cstdio>
#include <iostream>
#include "Investimento.h"
#include "Conta.h"
using namespace std;
class ContaCorrente : public Conta, public Investimento{
    
    public:
    ContaCorrente( double saldo, int agencia, int numero, double taxajuros) :
    Conta( saldo, agencia, numero), Investimento(taxajuros){
        cout << getTaxa() << endl;
    }
    
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