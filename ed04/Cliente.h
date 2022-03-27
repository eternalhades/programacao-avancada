using namespace std;
#include <cstdio>
#include <iostream>
class Cliente{
    private:
    string _nome;
    string _email;
    int _datanascimento;
    int _idade;
    
    public:
    Cliente(){};
    
    Cliente(string nome, string email, int datanascimento, int idade): 
            _nome(nome),
            _email(email),
            _datanascimento(datanascimento),
            _idade(idade)
            {}
     int  getIdade () const{
     return _idade;
    }

    int  getDataNascimento () const{
         return _datanascimento;
    }
    string  getNome () const{
         return _nome;
    }
    string  getEmail () const{
         return _email;
    }
    void setDatanascimento(int &datanascimento){
        _datanascimento = datanascimento;
    }
    void setIdade(int &idade){
        _idade = idade;
    }
    void setEmail(string &email){
        _email = email;
    }
    void setENome(string &nome){
        _nome = nome;
    }


};
