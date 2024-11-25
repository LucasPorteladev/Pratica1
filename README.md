README - Problemas 2 e 3: Análise de Estruturas de Dados e Impacto Computacional
Sumário

    Introdução
    Problema 2: Altura Máxima e Análise de Crescimento em Árvores Binárias
        Descrição do Código
        Estruturas Utilizadas
        Análise de Crescimento
        Impacto no Custo Computacional
    Problema 3: Dicionário Eletrônico com Autocompletar
        Descrição do Código
        Estruturas Utilizadas
        Custo Computacional e Discussão
    Execução dos Códigos
    Conclusão Geral

Introdução

Este documento explora a implementação de estruturas de dados utilizando árvores binárias de busca (BST) para resolver problemas relacionados a gerência de árvores e dicionários eletrônicos. Os códigos fornecidos implementam funcionalidades práticas, como inserção, remoção, consulta de altura, cálculo de caminhos e busca por prefixos com sugestões automáticas.

Além da explicação do código, o documento apresenta uma análise detalhada sobre o impacto computacional das operações realizadas, destacando como o balanceamento da árvore influencia a eficiência.
Problema 2: Altura Máxima e Análise de Crescimento em Árvores Binárias
Descrição do Código

O código principal implementa um menu interativo para manipular uma árvore binária. Principais funcionalidades:

    Inserção: Insere valores na árvore através do método tree.insere(num).
    Remoção: Remove valores pelo método tree.remove(num).
    Consulta de Altura: Calcula a altura com tree.calculaAltura() e ajusta o valor retornado para índice zero.
    Caminho Mais Longo: Determina o trajeto mais extenso na árvore com tree.caminhoMaisLongo().

Funcionamento do Menu:

    Opção [1]: Inserir um número.
    Opção [2]: Remover um número.
    Opção [3]: Consultar altura e caminho mais longo.
    Opção [4]: Encerrar o programa.

Estruturas Utilizadas no Problema 2

    Árvore Binária de Busca (BST):
        Organiza elementos de forma hierárquica:
            Nós à esquerda: valores menores.
            Nós à direita: valores maiores.
        Complexidade:
            Inserção, remoção, busca: O(h)O(h), onde hh é a altura.
            Pior caso (h=nh=n): O(n)O(n) para árvores desbalanceadas.
            Melhor caso (h=log⁡nh=logn): O(log⁡n)O(logn) para árvores equilibradas.

    Caminho Mais Longo:
        Identificado através de uma busca recursiva, visitando os ramos esquerdo e direito.

Análise de Crescimento
Inserção	Altura hh	Custo Médio	Custo Máximo
Desbalanceada	nn	O(n)O(n)	O(n)O(n)
Equilibrada	log⁡nlogn	O(log⁡n)O(logn)	O(log⁡n)O(logn)
Observação do Custo Adicional de 39%

    Inserções desbalanceadas apresentaram um aumento médio de 39% no custo computacional devido à profundidade excessiva.

Problema 3: Dicionário Eletrônico com Autocompletar
Descrição do Código do Problema 3

Implementa um dicionário utilizando uma árvore binária para organizar e buscar palavras.

    Carregamento de Palavras:
        As palavras são lidas de um arquivo datasets/words.txt.
        Inseridas na árvore binária com o método inserir.

    Busca por Prefixo:
        O método obterSugestoes percorre a árvore e retorna palavras com prefixo correspondente.
        Resultados são ordenados lexicograficamente.

    Interação com o Usuário:
        Solicita um prefixo ao usuário.
        Retorna sugestões e verifica correspondência exata.

Estruturas Utilizadas no Problema 3

    Árvore Binária de Busca (BST):
        Organiza palavras de forma lexicográfica.
        Complexidade:
            Inserção, busca: O(h)O(h), onde hh é a altura.

    Carregamento de Palavras:
        Gerenciado pela classe Dicionario, que lê o arquivo e insere as palavras na BST.

Execução dos Códigos
Requisitos

    Compilador C++ compatível com padrão C++11 ou superior (ex.: g++).
    Estrutura do projeto:
        Problema 2: Inclui src/ com código e Makefile.
        Problema 3: Inclui src/, datasets/words.txt e Makefile.

Comandos de Compilação e Execução

    Problema 2:

cd Problema2
make
./build/main.out

Problema 3:

    cd Problema3
    make
    ./main.out

Instalação do GCC

    Linux/Mac:

sudo apt-get install g++

Windows (via MinGW):

    Baixar MinGW: https://osdn.net/projects/mingw/releases/
    Adicionar bin ao PATH.
