#pragma once

#include "TelaProduto.h"
#include "Lanche.h"
#include "ListaLanche.h"

class Controller {
public:
    Controller(): _tela(TelaProduto()),
                       _lanches(ListaLanche<Lanche>(100)) {
            // vazio
    }

    void executar() {

        while (true) {

            // Exibir o menu principal
            _tela.exibirMenuPrincipal();

            // Usuário escolhe uma opção
            int opcao = _tela.lerOpcao();

            // Tratamento da opção
            switch (opcao) {
                case 1:
                    inserirProduto();
                    break;
                case 2:
                    removerProduto();
                    break;
                case 3:
                    consultarProduto();
                    break;
                case 4:
                    return;
            }
        }
    }

    void inserirProduto() {
        // Le o produto do usuario
        Lanche lanche = _tela.lerLanche();

        // Salva o produto na lista
        _lanches.insere(lanche);
    }

    void removerProduto() {
        try {
            // Le a posicao a ser removida
            int posicao = _tela.lerPosicao();

            // Remove o produto da lista
            _lanches.remove(posicao);
        }
        catch (const char *erro) {
            _tela.exibirMensagemErro(erro);
        }

    }

    void consultarProduto() {
        _tela.imprimirProdutos(_lanches);
    }

private:
    TelaProduto _tela;
    ListaLanche<Lanche> _lanches;
};