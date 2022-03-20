#include <cstdio>
#include <iostream>
#include "relogio.h"
using namespace std;


int main()
{
    Relogio r1(23,59), r2(22,40), r3(9, 42);
    cout << r1.getHora()<< ":"<< r1.getMinuto() << endl;
    cout << r2.getHora()<< ":"<< r2.getMinuto() << endl;
    cout << r3.getHora()<< ":"<< r3.getMinuto() << endl;
    cout << " o relogio r1  está com " << r1.getMinuto() << "minutos" << endl;
    cout << " o relogio r2 está com " << r2.getMinuto() << "minutos" << endl;
    cout << " o relogio r3  está com " << r3.getMinuto() << "minutos" << endl;
    return 0;
}




