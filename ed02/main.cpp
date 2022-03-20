#include <cstdio>
#include <iostream>
#include "relogio.h"
using namespace std;


int main()
{
    Relogio r1(23,59), r2(22,40), r3(9, 42);
    cout << " o relogio r1  está com " << r1.getMinuto() << "minutos" << endl;
    cout << " o relogio r2 está com " << r2.getMinuto() << "minutos" << endl;
    cout << " o relogio r3  está com " << r3.getMinuto() << "minutos" << endl;
    r1.setHora(4);
    r1.setMinuto(31);
    r2.setHora(5);
    r2.setMinuto(59);
    r1.setHora(19);
    r1.setMinuto(32);
    
    r1.mostrahora();
    r2.mostrahora();
    r3.mostrahora();
    return 0;
}




