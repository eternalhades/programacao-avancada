#pragma once

#include <iostream>
#include "Lanche.h"
#include "ListaLanche.h"

class TelaProduto {

public:

    void exibirMenuPrincipal() const {
        std::cout << "== Menu principal ==" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Adicionar Lanche" << std::endl;
        std::cout << "2. Remover Lanche" << std::endl;
        std::cout << "3. Consultar Lista" << std::endl;
        std::cout << "4. Sair" << std::endl;
    }

    int lerOpcao() const {
        std::cout << ":> ";
        int opcao;
        std::string buffer;
        std::cin >> opcao;
        std::getline(std::cin, buffer);

        return opcao;
    };
    Lanche lerLanche() const {
        std::cout << "== Monte seu lanche ==" << std::endl;

        std::string sabor;
        std::cout << " Digite o sabor do lanche: ";
        std::getline(std::cin, sabor);

        float tamanho;
        std::cout << "Digite o tamanho do lanche: ";
        std::cin >> tamanho;

        std::string pao;
        std::cout << "Digite o tipo de pão: ";
        std::getline(std::cin, pao);
        
        std::string queijo;
        std::cout << "Digite o tipo de queijo: ";
        std::getline(std::cin, queijo);
        
        
        std::string adicional;
        std::cout << "Digite os adicionais, caso nao queira digite n e depois enter: ";
        std::getline(std::cin, adicional);
        
        std::string temperatura;
        std::cout << "Digite a temperatura, quente ou frio: ";
        std::getline(std::cin, temperatura);
        
        std::string vegetais;
        std::cout << "Digite os vegetais: ";
        std::getline(std::cin, vegetais);
        
        
        std::string molho;
        std::cout << "Digite os molhos: ";
        std::getline(std::cin, molho);
        
        std::string tipoBebida;
        std::cout << "Digite sua Bebida: ";
        std::getline(std::cin, tipoBebida);
        
        std::string tamanhoBebida;
        std::cout << "Digite o tamanho da sua bebida 300, 500 ou 700ml: ";
        std::getline(std::cin, tamanhoBebida);
        
        
        

        return Lanche(tamanho, sabor, pao, queijo, vegetais, molho, adicional, temperatura, tamanhoBebida, tipoBebida);
    }

    int lerPosicao() const {
        std::cout << "== Posição a ser removida ==" << std::endl;

        int posicao;
        std::cout << "Posição: ";
        std::cin >> posicao;

        return posicao;
    }

    void imprimirProdutos(const ListaLanche<Lanche> &lista) const {
        std::cout << "== Lanche ==" << std::endl;

        for (int i = 0; i < lista.getTamanho(); i++) {
            
            std::cout << "Sabor......: " << lista[i].getSabor() << std::endl;
            std::cout << "Temperatura......: " << lista[i].getTemperatura() << std::endl;
            std::cout << "Tamanho.....: " << lista[i].getTamanho() << std::endl;
            std::cout << "Pao......: " << lista[i].getPao() << std::endl;
            std::cout << "Queijo......: " << lista[i].getQueijo() << std::endl;
            std::cout << "Adicionais......: " << lista[i].getAdicional() << std::endl;
            std::cout << "Vegetais......: " << lista[i].getVegetais() << std::endl;
            std::cout << "Molho......: " << lista[i].getMolho() << std::endl;
            std::cout << "Tamanho da Bebida......: " << lista[i].getTamanhoBebida() << std::endl;
            std::cout << "Tipo da bebida......: " << lista[i].getTipo() << std::endl;
            std::cout << std::endl;
        }

    }

    void exibirMensagemErro(const char *erro) {
        std::cerr << erro << std::endl;
    }
};