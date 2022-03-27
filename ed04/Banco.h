using namespace std;
#include <cstdio>
#include <iostream>


class Banco{
    private:
    int _numerocontas;
    
    public:
    
    Banco(){}
    
    Banco(int numerocontas) : _numerocontas(numerocontas){}
    
     void imprimirContas(Conta *contas){
        for(int i = 0; i< _numerocontas; i++){
        cout << contas[i].getSaldo() << endl;
        cout << contas[i].getAgencia() << endl;
        cout << contas[i].getNumero() << endl;
        }
    }
    
   
    
};