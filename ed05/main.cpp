#include <cstdio>
#include <iostream>

#include "ContaCorrente.h"
//#include "ContaSalario.h"
//#include "ContaPoupança.h"
using namespace std;

int main(){
    //ContaSalario conta(100, 2, 3);
   //conta.depositar();
    //ContaPoupança conta3(1000, 1, 5, 6);
   //conta3.aplicarJurosDias(20, 0.08);
   ContaCorrente conta2(1000, 2, 3, 5);
  
   conta2.aplicarJurosDias(20, 0.03);
   
   conta2.imprimirInvestimento();
    
  
    
    
}
