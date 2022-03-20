using namespace std;
#include <cstdio>
#include <iostream>
class Relogio{
public:
    int hora;
    int minuto;
public:
        Relogio(int hora, int minuto) {
        this->hora = hora;
        this->minuto = minuto;
        cout << "inciando relogio" << endl;
    }

    void setHora(int hora){
        this->hora =  hora;
    }

    int  getHora(){
        return hora;
    }
     void setMinuto(int minuto){
        this->minuto =  minuto;
     }
    int  getMinuto(){
        return minuto;
    }
    void mostrahora(){
        
    }

};