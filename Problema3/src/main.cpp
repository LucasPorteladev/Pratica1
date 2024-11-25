#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <memory>

using namespace std;


class No {
public:
    string palavra;
    unique_ptr<No> esquerda;
    unique_ptr<No> direita;

    No(string palavra) : palavra(move(palavra)), esquerda(nullptr), direita(nullptr) {}
};


class ArvoreBinariaBusca {
private:
    unique_ptr<No> raiz;

    void inserir(unique_ptr<No>& no, const string& palavra) {
        if (!no) {
            no = make_unique<No>(palavra);
        } else if (palavra < no->palavra) {
            inserir(no->esquerda, palavra);
        } else if (palavra > no->palavra) {
            inserir(no->direita, palavra);
        }
    }

    void buscarSugestoes(No* no, const string& prefixo, vector<string>& sugestoes) const {
        if (!no) return;

        if (no->palavra.find(prefixo) == 0) { 
            sugestoes.push_back(no->palavra);
        }

        buscarSugestoes(no->esquerda.get(), prefixo, sugestoes);
        buscarSugestoes(no->direita.get(), prefixo, sugestoes);
    }

public:
    ArvoreBinariaBusca() : raiz(nullptr) {}

    void inserir(const string& palavra) {
        inserir(raiz, palavra);
    }

    vector<string> obterSugestoes(const string& prefixo) const {
        vector<string> sugestoes;
        buscarSugestoes(raiz.get(), prefixo, sugestoes);
        sort(sugestoes.begin(), sugestoes.end()); 
        return sugestoes;
    }
};


class Dicionario {
private:
    ArvoreBinariaBusca arvore;
    vector<string> todasPalavras;

    void carregarPalavrasDeArquivo(const string& nomeArquivo, int limite) {
        ifstream arquivo(nomeArquivo);
        if (!arquivo.is_open()) {
            throw runtime_error("Erro ao abrir o arquivo.");
        }

        string palavra;
        while (arquivo >> palavra && todasPalavras.size() < limite) {
            todasPalavras.push_back(palavra);
            arvore.inserir(palavra);
        }

        arquivo.close();
    }

public:
    Dicionario(const string& nomeArquivo, int limite) {
        carregarPalavrasDeArquivo(nomeArquivo, limite);
    }

    void iniciarBusca() {
        string prefixo;

        cout << "Digite a primeira letra ou mais caracteres de uma palavra: ";
        while (cin >> prefixo) {
            auto sugestoes = arvore.obterSugestoes(prefixo);

            if (sugestoes.empty()) {
                cout << "Nenhuma palavra encontrada com o prefixo '" << prefixo << "'.\n";
            } else {
                cout << "Sugestões: ";
                for (const auto& palavra : sugestoes) {
                    cout << palavra << " ";
                }
                cout << endl;
            }

            if (sugestoes.size() == 1 && sugestoes[0] == prefixo) {
                cout << "Palavra encontrada: " << sugestoes[0] << endl;
                break;
            }

            cout << "Digite outro prefixo para continuar a busca: ";
        }
    }
};

int main() {
    try {
        cout << "Quantas palavras deseja carregar no dicionário? ";
        int limite;
        cin >> limite;

        string nomeArquivo = "datasets/words.txt";
        Dicionario dicionario(nomeArquivo, limite);

        dicionario.iniciarBusca();
    } catch (const exception& e) {
        cerr << "Erro: " << e.what() << endl;
    }

    return 0;
}