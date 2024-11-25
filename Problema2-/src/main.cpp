#include "BinaryTree.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
    int option;
    int num;
    BinaryTree tree;

    std::cout << "Bem-vindo ao gerenciador de árvore binária!" << std::endl;
    while (option != 4) {
        std::cout << "Menu de opções:\n"
                  << "[1]: Inserir\n"
                  << "[2]: Remover\n"
                  << "[3]: Altura e Caminho mais longo\n"
                  << "[4]: Sair\n";

        std::cout << "Qual opção deseja:" << std::endl;
        std::cin >> option;

        switch (option) {
            case 1:
                std::cout << "Digite o valor a inserir:" << std::endl;
                std::cin >> num;
                tree.insere(num);
                break;

            case 2:
                std::cout << "Digite o valor a remover:" << std::endl;
                std::cin >> num;
                tree.remove(num);
                break;

            case 3:
                std::cout << "Altura da árvore atual: " << tree.calculaAltura() - 1 << std::endl;
                std::cout << "Impressão em pré-ordem: ";
                tree.imprimePreOrdem();
                tree.caminhoMaisLongo();
                break;

            case 4:
                std::cout << "Saindo..." << std::endl;
                break;

            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
                break;
        }
    }

    return 0;
}
