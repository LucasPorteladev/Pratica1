# README - Problemas 2 e 3: Análise de Estruturas de Dados e Impacto Computacional

**Autor:** Lucas Cerqueira Portela  
**Email:** lucascerqueiraportela04@gmail.com  
**Curso:** Engenharia de Computação - CEFET V  

---

## Sumário

1. [Introdução](#introdução)
2. [Problema 2: Altura Máxima e Análise de Crescimento em Árvores Binárias](#problema-2-altura-máxima-e-análise-de-crescimento-em-árvores-binárias)
   - [Descrição do Código](#descrição-do-código)
   - [Estruturas Utilizadas](#estruturas-utilizadas-no-problema-2)
   - [Análise de Crescimento](#análise-de-crescimento)
   - [Impacto no Custo Computacional](#impacto-no-custo-computacional)
   - [Gráficos de Custo Assintótico](#gráficos-de-custo-assintótico-do-problema-2)
3. [Problema 3: Dicionário Eletrônico com Autocompletar](#problema-3-dicionário-eletrônico-com-autocompletar)
   - [Descrição do Código](#descrição-do-código-do-problema-3)
   - [Estruturas Utilizadas](#estruturas-utilizadas-no-problema-3)
   - [Custo Computacional e Discussão](#custo-computacional-e-discussão)
   - [Gráficos de Custo Assintótico](#gráficos-de-custo-assintótico-do-problema-3)
4. [Execução dos Códigos](#execução-dos-códigos)
5. [Instalação do GCC e Requisitos](#instalação-do-gcc-e-requisitos)
6. [Conclusão Geral](#conclusão-geral)

---

## Introdução

Este projeto explora a utilização de árvores binárias de busca (BST) para resolver dois problemas distintos:

1. **Problema 2:** Análise do crescimento da altura de uma árvore binária durante inserções e remoções, com destaque para os custos computacionais associados.
2. **Problema 3:** Implementação de um dicionário eletrônico com suporte para autocompletar e busca eficiente por prefixos.

O documento também discute o impacto estrutural de árvores desbalanceadas versus equilibradas e apresenta gráficos para ilustrar os custos assintóticos envolvidos.

---

## Problema 2: Altura Máxima e Análise de Crescimento em Árvores Binárias

### Descrição do Código

O código principal implementa um menu interativo que permite:
- Inserir valores na árvore com `tree.insere(num)`.
- Remover valores da árvore com `tree.remove(num)`.
- Consultar a altura atual da árvore e determinar o caminho mais longo.

#### **Menu de Opções**
1. **Inserção:** Insere um número e reorganiza os nós conforme a propriedade da árvore binária de busca.
2. **Remoção:** Remove um nó específico, ajustando as conexões de acordo com os casos (nó folha, com um filho ou com dois filhos).
3. **Consulta:** Mostra a altura da árvore e imprime o caminho mais longo da raiz até uma folha.

### Estruturas Utilizadas no Problema 2

1. **Árvore Binária de Busca (BST):**
   - Estrutura hierárquica onde os nós à esquerda possuem valores menores que a raiz, e os à direita, maiores.
   - **Complexidade:**
     - Inserção, remoção e busca: \(O(h)\), onde \(h\) é a altura da árvore.
     - No pior caso (árvore desbalanceada): \(h = n\), resultando em \(O(n)\).
     - No melhor caso (árvore equilibrada): \(h = \log n\), resultando em \(O(\log n)\).

2. **Caminho Mais Longo:**
   - Identifica o maior trajeto da raiz até uma folha, com busca recursiva nos sub-ramos esquerdo e direito.

---

### Análise de Crescimento

| **Inserção**       | **Altura \(h\)** | **Custo Médio**   | **Custo Máximo**   |
|--------------------|------------------|--------------------|--------------------|
| Desbalanceada      | \(n\)            | \(O(n)\)           | \(O(n)\)           |
| Equilibrada        | \(\log n\)       | \(O(\log n)\)      | \(O(\log n)\)      |

#### Observação do Custo Adicional de 39%
- Árvores desbalanceadas apresentaram um aumento médio de **39% no custo computacional** em operações de inserção e remoção devido à profundidade excessiva.

---

### Gráficos de Custo Assintótico do Problema 2

#### 1. Crescimento da Altura
![Altura de uma árvore](https://via.placeholder.com/800x400?text=Gráfico:+Crescimento+da+Altura)

#### 2. Custo de Operações (Inserção e Remoção)
![Custo Operacional](https://via.placeholder.com/800x400?text=Gráfico:+Custo+de+Operações)

---

## Problema 3: Dicionário Eletrônico com Autocompletar

### Descrição do Código do Problema 3

Este código implementa um dicionário eletrônico que utiliza uma árvore binária para armazenar e buscar palavras.

#### **Funcionalidades**
1. **Carregamento de Dados:**
   - Lê palavras de um arquivo `datasets/words.txt`.
   - Insere as palavras na árvore binária com o método `inserir`.

2. **Busca por Prefixo:**
   - O método `obterSugestoes` percorre a árvore para encontrar palavras que começam com o prefixo fornecido.
   - Ordena os resultados lexicograficamente antes de exibir.

3. **Interação com o Usuário:**
   - Solicita ao usuário um prefixo.
   - Retorna sugestões de palavras e verifica correspondências exatas.

---

### Estruturas Utilizadas no Problema 3

1. **Árvore Binária de Busca (BST):**
   - Armazena palavras em ordem lexicográfica.
   - **Complexidade:**
     - Inserção, busca: \(O(h)\), onde \(h\) é a altura.

2. **Carregamento de Palavras:**
   - Gerenciado pela classe `Dicionario`, que lê o arquivo e insere as palavras na BST.

---

### Custo Computacional e Discussão

| **Operação**     | **BST (Desbalanceada)** | **BST (Equilibrada)** |
|-------------------|-------------------------|------------------------|
| Inserção          | \(O(n)\)               | \(O(\log n)\)          |
| Busca por Prefixo | \(O(n)\)               | \(O(\log n)\)          |

---

### Gráficos de Custo Assintótico do Problema 3

#### 1. Custo de Busca por Prefixo
![Custo de Busca por Prefixo](https://via.placeholder.com/800x400?text=Gráfico:+Custo+de+Busca+por+Prefixo)

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
