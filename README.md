# README - Problemas 2 e 3: Análise de Estruturas de Dados e Impacto Computacional

---

## Sumário

1. [Introdução](#introdução)
2. [Problema 2: Altura Máxima e Análise de Crescimento em Árvores Binárias](#problema-2-altura-máxima-e-análise-de-crescimento-em-árvores-binárias)
   - [Descrição do Código](#descrição-do-código)
   - [Estruturas Utilizadas](#estruturas-utilizadas-no-problema-2)
   - [Análise de Crescimento](#análise-de-crescimento)
   - [Impacto no Custo Computacional](#impacto-no-custo-computacional)
3. [Problema 3: Dicionário Eletrônico com Autocompletar](#problema-3-dicionário-eletrônico-com-autocompletar)
   - [Descrição do Código](#descrição-do-código-do-problema-3)
   - [Estruturas Utilizadas](#estruturas-utilizadas-no-problema-3)
   - [Custo Computacional e Discussão](#custo-computacional-e-discussão)
4. [Execução dos Códigos](#execução-dos-códigos)
5. [Conclusão Geral](#conclusão-geral)

---

## Introdução

Este documento explora a implementação de estruturas de dados utilizando árvores binárias de busca (BST) para resolver problemas relacionados à gerência de árvores e dicionários eletrônicos. Os códigos fornecidos implementam funcionalidades práticas, como inserção, remoção, consulta de altura, cálculo de caminhos e busca por prefixos com sugestões automáticas.

Além da explicação do código, o documento apresenta uma análise detalhada sobre o impacto computacional das operações realizadas, destacando como o balanceamento da árvore influencia a eficiência.

---

## Problema 2: Altura Máxima e Análise de Crescimento em Árvores Binárias

### Descrição do Código

O código principal implementa um menu interativo para manipular uma árvore binária. Principais funcionalidades:

1. **Inserção:** Insere valores na árvore através do método `tree.insere(num)`.
2. **Remoção:** Remove valores pelo método `tree.remove(num)`.
3. **Consulta de Altura:** Calcula a altura com `tree.calculaAltura()` e ajusta o valor retornado para índice zero.
4. **Caminho Mais Longo:** Determina o trajeto mais extenso na árvore com `tree.caminhoMaisLongo()`.

**Funcionamento do Menu:**
- Opção [1]: Inserir um número.
- Opção [2]: Remover um número.
- Opção [3]: Consultar altura e caminho mais longo.
- Opção [4]: Encerrar o programa.

---

### Estruturas Utilizadas no Problema 2

1. **Árvore Binária de Busca (BST):**
   - Organiza elementos de forma hierárquica:
     - Nós à esquerda: valores menores.
     - Nós à direita: valores maiores.
   - **Complexidade:**
     - Inserção, remoção, busca: \(O(h)\), onde \(h\) é a altura.
     - Pior caso (\(h = n\)): \(O(n)\) para árvores desbalanceadas.
     - Melhor caso (\(h = \log n\)): \(O(\log n)\) para árvores equilibradas.

2. **Caminho Mais Longo:**
   - Identificado através de uma busca recursiva, visitando os ramos esquerdo e direito.

---

### Análise de Crescimento

| **Inserção**       | **Altura \(h\)** | **Custo Médio**   | **Custo Máximo**   |
|--------------------|------------------|--------------------|--------------------|
| Desbalanceada      | \(n\)            | \(O(n)\)           | \(O(n)\)           |
| Equilibrada        | \(\log n\)       | \(O(\log n)\)      | \(O(\log n)\)      |

#### Observação do Custo Adicional de 39%
- Inserções desbalanceadas apresentaram um aumento médio de **39% no custo computacional** devido à profundidade excessiva.

---

## Problema 3: Dicionário Eletrônico com Autocompletar

### Descrição do Código do Problema 3

Implementa um dicionário utilizando uma árvore binária para organizar e buscar palavras. 

1. **Carregamento de Palavras:**
   - As palavras são lidas de um arquivo `datasets/words.txt`.
   - Inseridas na árvore binária com o método `inserir`.

2. **Busca por Prefixo:**
   - O método `obterSugestoes` percorre a árvore e retorna palavras com prefixo correspondente.
   - Resultados são ordenados lexicograficamente.

3. **Interação com o Usuário:**
   - Solicita um prefixo ao usuário.
   - Retorna sugestões e verifica correspondência exata.

---

### Estruturas Utilizadas no Problema 3

1. **Árvore Binária de Busca (BST):**
   - Organiza palavras de forma lexicográfica.
   - **Complexidade:**
     - Inserção, busca: \(O(h)\), onde \(h\) é a altura.

2. **Carregamento de Palavras:**
   - Gerenciado pela classe `Dicionario`, que lê o arquivo e insere as palavras na BST.

---

## Execução dos Códigos

### Requisitos
- Compilador C++ compatível com padrão C++11 ou superior (ex.: `g++`).
- Estrutura do projeto:
  - **Problema 2:** Inclui `src/` com código e `Makefile`.
  - **Problema 3:** Inclui `src/`, `datasets/words.txt` e `Makefile`.

### Comandos de Compilação e Execução
1. **Problema 2:**
   ```bash
   cd Problema2
   make
   ./build/main.out

2. **Problema 3:**
   ```bash
   cd Problema3
   make
   ./build/main.out
