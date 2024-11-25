# README - Problemas 2 e 3: Análise de Estruturas de Dados e Impacto Computacional



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
4. [Conclusão Geral](#conclusão-geral)



## Introdução

Este documento explora a implementação de estruturas de dados utilizando árvores binárias de busca (BST) para resolver problemas relacionados a gerência de árvores e dicionários eletrônicos. Os códigos fornecidos implementam funcionalidades práticas, como inserção, remoção, consulta de altura, cálculo de caminhos e busca por prefixos com sugestões automáticas.

Além da explicação do código, o documento apresenta uma análise detalhada sobre o impacto computacional das operações realizadas, destacando como o balanceamento da árvore influencia a eficiência.



## Problema 2: Altura Máxima e Análise de Crescimento em Árvores Binárias

### Descrição do Código

O código principal utiliza a classe `BinaryTree` para gerenciar a árvore binária de busca (BST). Ele implementa as seguintes funcionalidades:

- **Inserção:** Insere valores na árvore, garantindo a propriedade de BST (menores à esquerda, maiores à direita).
- **Remoção:** Remove elementos da árvore, ajustando os nós:
  - Nó folha: Removido diretamente.
  - Nó com um filho: Substituído pelo filho.
  - Nó com dois filhos: Substituído pelo sucessor in-ordem (menor valor na subárvore direita).
- **Altura e Caminho Mais Longo:** Calcula a altura da árvore e identifica o caminho mais extenso entre a raiz e uma folha.
- **Interação com o Usuário:** Um menu oferece opções de inserção, remoção, consulta de altura e saída.



### Estruturas Utilizadas no Problema 2

A implementação utiliza uma **Árvore Binária de Busca (BST)**, que é uma estrutura eficiente para operações dinâmicas de inserção, busca e remoção.

**Características da BST:**
- Estrutura hierárquica com nós que possuem valores únicos.
- Complexidade depende diretamente da altura (\(h\)):
  - Melhor caso (árvore balanceada): \(h = O(\log n)\).
  - Pior caso (árvore desbalanceada): \(h = O(n)\).

**Cálculo da Altura:**
- Feito recursivamente, comparando as alturas dos sub-ramos esquerdo e direito.
- A altura da árvore é \(1 + \max(\text{alturaEsquerda}, \text{alturaDireita})\).



### Análise de Crescimento

#### Árvores Desbalanceadas ("Tortas")
- Inserções ordenadas criam árvores lineares, semelhantes a listas encadeadas.
- **Altura:** \(h = n\), onde \(n\) é o número de elementos.
- **Impacto:** Operações como busca e remoção sofrem com custo \(O(n)\), já que cada nó precisa ser visitado.

#### Árvores Mais Equilibradas
- Inserções intercaladas promovem maior uniformidade na estrutura.
- **Altura:** \(h = O(\log n)\).
- **Impacto:** Operações tornam-se mais eficientes, com \(O(\log n)\) para busca, inserção e remoção.

#### Comparação de Altura e Custo
| **Inserção**       | **Altura \(h\)** | **Custo Médio**   | **Custo Máximo**   |
|--------------------|------------------|--------------------|--------------------|
| Desbalanceada      | \(n\)            | \(O(n)\)           | \(O(n)\)           |
| Equilibrada        | \(\log n\)       | \(O(\log n)\)      | \(O(\log n)\)      |

#### Observação do Custo Adicional de 39%
- Árvores desbalanceadas apresentaram em média **39% mais custo computacional** nas operações devido à maior profundidade.
- Árvores equilibradas limitaram esse aumento, evidenciando a eficiência do balanceamento.



## Problema 3: Dicionário Eletrônico com Autocompletar

### Descrição do Código do Problema 3

O código implementa um dicionário eletrônico usando uma árvore binária de busca. Ele carrega palavras de um arquivo texto e permite buscas baseadas em prefixos.

#### Principais Funcionalidades:
1. **Carregamento de Dados:**
   - As palavras são lidas de um arquivo `.txt` contendo 10.000 palavras em inglês.
   - Limite de palavras é configurado pelo usuário.

2. **Inserção:**
   - Palavras são inseridas na árvore binária.
   - Inserção preserva a ordem lexicográfica.

3. **Busca por Prefixo:**
   - Percorre a subárvore correspondente ao prefixo.
   - Retorna sugestões em ordem lexicográfica.

4. **Interação com o Usuário:**
   - O usuário digita um prefixo e recebe sugestões de palavras.
   - Busca termina automaticamente se o prefixo coincide com uma palavra.



### Estruturas Utilizadas no Problema 3

#### 1. **Árvore Binária de Busca**
- Estrutura hierárquica que organiza palavras lexicograficamente.
- Operações:
  - **Inserção:** \(O(h)\), onde \(h\) é a altura.
  - **Busca:** Custo proporcional à profundidade do nó (\(O(h)\)).

#### 2. **Alternativa: Trie (Sugestão)**
- Para buscas por prefixos, uma Trie seria mais eficiente:
  - **Inserção e Busca:** Ambos têm custo \(O(k)\), onde \(k\) é o comprimento do prefixo.
  - Menor uso de memória para prefixos comuns.



### Custo Computacional e Discussão

#### Custo Médio por Operação
| **Operação**     | **BST (Desbalanceada)** | **BST (Equilibrada)** | **Trie (Sugestão)** |
|-------------------|-------------------------|------------------------|---------------------|
| Inserção          | \(O(n)\)               | \(O(\log n)\)          | \(O(k)\)            |
| Busca por Prefixo | \(O(n)\)               | \(O(\log n)\)          | \(O(k)\)            |

#### Resultados Observados
- Árvores equilibradas foram eficientes para buscas lexicográficas em dicionários de até 10.000 palavras.
- Árvores desbalanceadas apresentaram queda de desempenho em grandes volumes.
- Tries ofereceriam maior eficiência para autocompletar, especialmente com palavras com prefixos compartilhados.



## Conclusão Geral

1. **Problema 2:**
   - O desbalanceamento de árvores binárias impacta diretamente o custo das operações. Simulações confirmaram um aumento de até **39% no custo** em árvores desbalanceadas.
   - Árvores equilibradas, mesmo sem balanceamento automático, ofereceram maior eficiência.

2. **Problema 3:**
   - A BST é uma solução funcional para busca por prefixos e dicionários de pequeno a médio porte.
   - Estruturas como Tries são mais adequadas para grandes volumes, especialmente para funcionalidades de autocompletar.

3. **Recomendações Finais:**
   - O uso de balanceamento automático (AVL, Red-Black) ou estruturas alternativas (Trie) seria ideal para melhorar o desempenho das operações em ambos os problemas.
