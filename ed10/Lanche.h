#pragma once

#include <string>

class Lanche{
public:

    Lanche(){
        
    }
    Lanche(int tamanho, std::string sabor = "", std::string pao= "", std::string queijo= "",
    std::string vegetais= "", std::string molho= "", std::string adicional= "",
    std::string temperatura= "", std::string tamanhoBebida = "", std::string tipo = ""):
    _tamanho(tamanho), _sabor(sabor), _pao(pao), _queijo(queijo), _vegetais(vegetais), _molho(molho),
    _adicional(adicional), _temperatura(temperatura), _tamanhoBebida(tamanhoBebida), _tipo(tipo){
        
        
    }
    const int getTamanho() const {
        return _tamanho;
    }
    const std::string &getSabor() const {
        return _sabor;
    }
     const std::string &getPao() const {
        return _pao;
    }
     const std::string &getQueijo() const {
        return _queijo;
    }
     const std::string &getVegetais() const {
        return _vegetais;
    }
     const std::string &getMolho() const {
        return _molho;
    }
     const std::string &getAdicional() const {
        return _sabor;
    }
     const std::string &getTemperatura() const {
        return _temperatura;
    }
    void setTamanho( int tamanho) {
        _tamanho = tamanho;
    }
    void setNome(const std::string &sabor) {
        _sabor = sabor;
    }
    void setPao(const  std::string &pao) {
        _pao = pao;
    }
    void setQueijo(const std::string &queijo) {
        _queijo= queijo;
    }
    void setVegetais(const std::string &vegetais) {
        _vegetais = vegetais;
    }
    void setMolho(const  std::string &molho) {
        _molho= molho;
    }
    void setTemperatura(const  std::string &temperatura) {
        _temperatura = temperatura;
    }
    const std::string &getTamanhoBebida() const {
        return _tamanhoBebida;
    }
    const std::string &getTipo() const {
        return _tipo;
    }
private: 
    int _tamanho;
    std::string _sabor;
    std::string _pao;
    std::string _queijo;
    std::string _vegetais;
    std::string _molho;
    std::string _adicional;
    std::string _temperatura;
    std::string _tamanhoBebida;
    std::string _tipo;
    
    
    
};