#include <cstdio>
#include <iostream>
#pragma once
class Investimento{
    public:
    float _taxajuros;
    
    public:
    
    Investimento(){}
    
    Investimento(float taxajuros) : _taxajuros(taxajuros){}
    
    float getTaxa() const{
        return _taxajuros;
    }
    void setTaxa(float taxajuros){
       _taxajuros= taxajuros;
    }
    
    
};