#include <cstdio>
#include <iostream>
#include "Banco.h"
#include "ContaCorrente.h"
#include "ContaSalario.h"
#include "ContaPoupanca.h"
using namespace std;

int main(){
    ContaPoupanca* cp1(100.0, 1, 2, 0.1);
    ContaPoupanca* cp2(2000.0, 2, 2, 0.1);
    ContaCorrente* cc1(100.0, 3, 2, 0.2);
    ContaCorrente* cc2(1000.0, 4, 2, 0.2);
    ContaSalario* cs1(500.0, 5, 2, 0.2);
    
   Banco *banco[5];
   
   banco[0] =  new Banco(cp1);
   banco[1] = new Banco(cp2);
   banco[2] = new Banco(cc1);
   banco[3] = new Banco(cc2);
   banco[4] = new Banco(cs1);
    
  for (int i= 0; i<5; i++){
      banco[i]->aplicarJurosDias(40, 0.1);
  }
    
    
}
