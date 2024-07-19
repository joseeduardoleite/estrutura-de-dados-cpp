## Lista linear
Uma **lista linear** é uma coleção de elementos dispostos em uma sequência linear, onde cada elemento tem um predecessor e um sucessor, exceto o primeiro e o último elemento, que têm apenas um sucessor e um predecessor, respectivamente. Os elementos são acessados sequencialmente, e cada posição na lista é identificada por um índice.

## Lista linear sequencial
Uma **lista linear sequencial**, também conhecida como vetor ou array, é uma estrutura de dados onde os elementos são armazenados em locais de memória contíguos. Cada elemento pode ser acessado diretamente pelo seu índice, tornando o acesso muito eficiente. No entanto, operações de inserção e remoção podem ser custosas, pois podem requerer o deslocamento de vários elementos.

### Características:
- **Acesso Direto**: Acesso rápido aos elementos usando um índice.
- **Memória Contígua**: Todos os elementos são armazenados em locais de memória adjacentes.
- **Tamanho Fixo**: Geralmente, o tamanho é definido no momento da criação e não pode ser alterado sem criar um novo array.

#### Exemplo em C++:
```cpp
#include <iostream>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    
    // Acessando elementos diretamente
    std::cout << "Elemento no índice 2: " << array[2] << std::endl;

    return 0;
}
```

## Lista Encadeada
Uma **lista encadeada** é uma estrutura de dados onde cada elemento é um nó que contém dois componentes: os dados e um ponteiro para o próximo nó na sequência. As listas encadeadas não exigem memória contígua, o que facilita a inserção e remoção de elementos em qualquer posição da lista.

### Tipos de Listas Encadeadas:
- **Lista Simplesmente Encadeada**: Cada nó contém um ponteiro para o próximo nó.
- **Lista Duplamente Encadeada**: Cada nó contém dois ponteiros, um para o próximo nó e outro para o nó anterior.
- **Lista Circular**: O último nó aponta de volta para o primeiro nó, formando um ciclo.

### Características:
- **Memória Não Contígua**: Os nós podem ser armazenados em qualquer lugar da memória.
- **Inserção/Remoção Rápida**: Facilita operações de inserção e remoção, especialmente em posições arbitrárias.
- **Acesso Sequencial**: O acesso a elementos requer a travessia da lista desde o início.

#### Segue um exemplo básico de código desse repositório em C++::
- [Exemplo de LinkedList (lista encadeada)](https://github.com/joseeduardoleite/estrutura-de-dados-cpp/tree/main/LinkedList)

## Comparação entre Lista Linear Sequencial e Lista Encadeada
- Lista Linear Sequencial:
  - Acesso direto aos elementos.
  - Memória contígua.
  - Inserções e remoções podem ser custosas.

- Lista Encadeada:
  - Acesso sequencial aos elementos.
  - Memória não contígua.
  - Inserções e remoções são eficientes.

## Diferença entre vetor dinâmico e vetor estático
A principal diferença entre um vetor dinâmico e um vetor estático está na forma como a memória é alocada e gerenciada.

#### Vetor Estático
- **Alocação de Memória**: A memória para um vetor estático é alocada em tempo de compilação.
- **Tamanho Fixo**: O tamanho do vetor é definido no momento da declaração e não pode ser alterado durante a execução do programa.
- **Escopo de Memória**: Dependendo de onde o vetor está declarado, a memória pode ser alocada na stack (para vetores locais) ou na data segment (para vetores globais).
- **Desempenho**: Geralmente mais eficiente em termos de acesso à memória, pois a localização da memória é fixa e conhecida em tempo de compilação.

#### Exemplo em C++:
```cpp
#include <iostream>

int main() {
    int staticArray[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        std::cout << staticArray[i] << " ";
    }

    return 0;
}
```

#### Vetor Dinâmico
- **Alocação de Memória**: A memória para um vetor dinâmico é alocada em tempo de execução.
- **Tamanho Variável**: O tamanho do vetor pode ser definido e modificado durante a execução do programa.
- **Escopo de Memória**: A memória é alocada no heap, o que permite uma maior flexibilidade em termos de tamanho e duração.
- **Gerenciamento de Memória**: O programador é responsável por alocar e desalocar a memória. Em linguagens como C++, isso é feito usando new e delete.
- **Desempenho**: Pode ser menos eficiente em termos de tempo de acesso, devido à alocação dinâmica e possível fragmentação de memória.

#### Exemplo em C++:
```cpp
#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the dynamic array: ";
    std::cin >> size;

    int* dynamicArray = new int[size];  // Alocação dinâmica

    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i + 1;
    }

    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }

    delete[] dynamicArray;  // Desalocação de memória

    return 0;
}
```

### Comparação

| Característica | Vetor Estático | Vetor Dinâmico |
| - | - | - |
| **Alocação de Memória** | Tempo de compilação	 | Tempo de execução |
| **Tamanho** | Fixo | Variável |
| **Escopo de Memória** | Stack (local) ou Data Segment (global) | Heap |
| **Desempenho** | Acesso rápido e eficiente | Pode ser menos eficiente devido à fragmentação |
| **Gerenciamento**	 | Automático pelo compilador | Manual pelo programador (new/delete em C++) |
| **Flexibilidade** | Menos flexível | Mais flexível |

### Quando Usar
- **Vetor Estático**: Use quando o tamanho do vetor é conhecido em tempo de compilação e não precisa mudar. Ideal para situações onde o desempenho é crítico e a quantidade de memória necessária é previsível.

- **Vetor Dinâmico**: Use quando o tamanho do vetor não é conhecido em tempo de compilação ou pode variar durante a execução do programa. Ideal para situações onde a flexibilidade é mais importante do que a otimização de desempenho.

##