# Problemas 2 e 3: Análise de Estruturas de Dados e Impacto Computacional

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
3. [Problema 3: Dicionário Eletrônico com Autocompletar](#problema-3-dicionário-eletrônico-com-autocompletar)
   - [Descrição do Código](#descrição-do-código-do-problema-3)
   - [Estruturas Utilizadas](#estruturas-utilizadas-no-problema-3)
   - [Custo Computacional e Discussão](#custo-computacional-e-discussão)
4. [Execução dos Códigos](#execução-dos-códigos)
   - [Requisitos](#requisitos)
   - [Comandos de Compilação e Execução](#comandos-de-compilação-e-execução)
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

#### Menu de Opções

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
   - Identifica o maior trajeto da raiz até uma folha, utilizando uma busca recursiva nos sub-ramos esquerdo e direito.

### Análise de Crescimento

| **Inserção**       | **Altura (\(h\))** | **Custo Médio**   | **Custo Máximo**   |
|--------------------|--------------------|-------------------|--------------------|
| Desbalanceada      | \(n\)              | \(O(n)\)          | \(O(n)\)           |
| Equilibrada        | \(\log n\)         | \(O(\log n)\)     | \(O(\log n)\)      |

#### Observação do Custo Adicional de 39%

- Árvores desbalanceadas apresentaram um aumento médio de **39% no custo computacional** em operações de inserção e remoção devido à profundidade excessiva.

---

## Problema 3: Dicionário Eletrônico com Autocompletar

### Descrição do Código do Problema 3

Este código implementa um dicionário eletrônico que utiliza uma árvore binária para armazenar e buscar palavras.

#### Funcionalidades

1. **Carregamento de Dados:**
   - Lê palavras de um arquivo `datasets/words.txt`.
   - Insere as palavras na árvore binária com o método `inserir`.

2. **Busca por Prefixo:**
   - O método `obterSugestoes` percorre a árvore para encontrar palavras que começam com o prefixo fornecido.
   - Ordena os resultados lexicograficamente antes de exibir.

3. **Interação com o Usuário:**
   - Solicita ao usuário um prefixo.
   - Retorna sugestões de palavras e verifica correspondências exatas.

### Estruturas Utilizadas no Problema 3

1. **Árvore Binária de Busca (BST):**
   - Armazena palavras em ordem lexicográfica.
   - **Complexidade:**
     - Inserção e busca: \(O(h)\), onde \(h\) é a altura da árvore.

2. **Carregamento de Palavras:**
   - Gerenciado pela classe `Dicionario`, que lê o arquivo e insere as palavras na BST.

### Custo Computacional e Discussão

| **Operação**       | **BST (Desbalanceada)** | **BST (Equilibrada)** |
|--------------------|-------------------------|------------------------|
| Inserção           | \(O(n)\)                | \(O(\log n)\)          |
| Busca por Prefixo  | \(O(n)\)                | \(O(\log n)\)          |

---

## Execução dos Códigos

### Requisitos

- Compilador C++ compatível com o padrão C++11 ou superior (ex.: `g++`).
- Estrutura do projeto:
  - **Problema 2:** Inclui `src/` com código e `Makefile`.
  - **Problema 3:** Inclui `src/`, `datasets/words.txt` e `Makefile`.

### Comandos de Compilação e Execução

1. **Problema 2:**
   ```bash
   cd Problema2
   make r
   ```

2. **Problema 3:**
   ```bash
   cd Problema3
   make r
   ```

---

## Instalação do GCC e Requisitos

Para instalar o GCC, siga o comando correspondente ao seu sistema operacional:

### Ubuntu / Debian

```bash
sudo apt update
sudo apt install build-essential
```

### MacOS (usando Homebrew)

```bash
brew install gcc
```

### Windows

- Instale o **MinGW** ou utilize o **WSL (Windows Subsystem for Linux)** para ter acesso ao GCC.

---

## Conclusão Geral

Este projeto exemplifica a importância de se analisar a altura e o balanceamento das árvores binárias ao implementar estruturas como dicionários e árvores de busca. Árvores desbalanceadas, apesar de funcionarem, podem ter um impacto significativo nos custos computacionais, especialmente para inserção e busca. Em contraste, árvores equilibradas, como AVL ou Red-Black, oferecem garantias melhores de performance ao manter uma altura logarítmica.

Além disso, o uso de árvores binárias para implementar funcionalidades como autocompletar ilustra a flexibilidade e eficiência dessas estruturas de dados quando utilizadas adequadamente.
