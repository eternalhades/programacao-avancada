#include <cstdio>
#include <iostream>
#include "Cliente.h"
#include "Conta.h"
#include "Banco.h"
using namespace std;

int main(){
    Cliente c1;
    int x = 2;
    
    Banco meubanco(10);
    c1.setIdade(x);
    Conta contas[10];
    
    Conta superConta[10000] = {Conta(c1, 300, 2, 213)};
    meubanco.imprimirContas(contas);
 
    Banco superBanco(10000);
    superBanco.imprimirContas(superConta);
    
    
    
  
    
    
}
