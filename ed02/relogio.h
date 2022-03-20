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
        cout << "iniciando relogio" << endl;
    }
    
    

    void setHora(int hora);
    int  getHora () const{
     return hora;
}
    void setMinuto(int minuto);
    int getMinuto () const{
     return minuto;
}
    void mostrahora() const{
    cout << getHora()<< ":"<< getMinuto() << endl;
}
    

    
};


inline void Relogio :: setMinuto(int minuto){
     this->minuto =  minuto;
}
inline void Relogio :: setHora(int hora){
     this->hora =  hora;
}
