#include <cstdio>
#include <iostream>
#include "Cliente.h"
#include "Conta.h"
using namespace std;

int main(){
    Cliente c1;
    int x = 2;
    c1.setIdade(x);
    Conta conta1(c1, 200.0, 2, 3);
    conta1.depositar(200);
    conta1.alterar
    cout<<conta1.getSaldo() << endl;
    
  
    
    
}
