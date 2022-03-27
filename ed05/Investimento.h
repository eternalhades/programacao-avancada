#include <cstdio>
#include <iostream>
using namespace std;
class Investimento{
    public:
    double _taxajuros;
    
    public:
    
    Investimento(){}
    
    Investimento(double taxajuros) : _taxajuros(taxajuros){}
    
    int getTaxa() const{
        return _taxajuros;
    }
    void setTaxa(double taxajuros){
       _taxajuros= taxajuros;
    }
    
    
};