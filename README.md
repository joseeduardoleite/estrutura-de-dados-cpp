# Estrutura de Dados 

## Pilha (Stack)

Uma pilha é uma estrutura de dados linear que segue o princípio **LIFO (Last In, First Out)**, ou seja, o último elemento inserido é o primeiro a ser removido.

### Operações básicas:

- **Push**: Adicionar um elemento ao topo da pilha.
- **Pop**: Remover o elemento do topo da pilha.
- **Peek** ou **Top**: Observar o elemento do topo sem removê-lo.
- **IsEmpty**: Verificar se a pilha está vazia.
- **Size**: Obter o número de elementos na pilha.

##

### Características

- **LIFO**: A principal característica de uma pilha é que a última entrada é a primeira saída.
- **Restrições de Acesso**: Só é possível adicionar ou remover elementos do topo da pilha.
- **Uso de Memória**: Quando implementada com arrays, a pilha pode ter um tamanho fixo, enquanto que com listas ligadas, pode crescer dinamicamente

##

### Aplicações comuns

- **Recursão**: A pilha de chamadas de um programa usa a estrutura de dados pilha para rastrear as funções ativas.
- **Desfazer/Refazer**: Em editores de texto ou programas gráficos, as ações de desfazer e refazer podem ser implementadas usando pilhas.
- **Avaliação de Expressões**: Pilhas são usadas para avaliar expressões matemáticas, incluindo expressões em notação polonesa reversa (RPN).
- **Navegação em Browser**: A funcionalidade de voltar e avançar em navegadores web pode ser implementada com pilhas.
- **Conversão de Sistemas Numéricos**: Pilhas são usadas na conversão de números de um sistema numérico para outro (por exemplo, decimal para binário).

##

### Vantagens e Desvantagens
#### Vantagens:
- Simplicidade na implementação.
- Operações de inserção e remoção são rápidas, com complexidade O(1).
#### Desvantagens:
- Acesso limitado (apenas ao topo da pilha).
- Pode causar problemas de overflow se implementada com um array de tamanho fixo e não for gerida corretamente.

##

### Implementação
A pilha pode ser implementada usando arrays (vetores) ou listas ligadas. Segue um exemplo básico de código em C++: 
- https://github.com/joseeduardoleite/estrutura-de-dados-cpp/tree/main/Stack


## Fila (Queue)
Uma fila é uma estrutura de dados linear que segue o princípio **FIFO (First In, First Out)**, ou seja, o primeiro elemento inserido é o primeiro a ser removido. A fila é utilizada para armazenar e gerenciar dados de maneira sequencial, garantindo que os elementos sejam processados na ordem em que foram adicionados.

### Operações básicas
- **Enqueue**: Adicionar um elemento ao final da fila.
- **Dequeue**: Remover e retornar o elemento do início da fila.
- **Peek ou Front**: Observar o elemento no início da fila sem removê-lo.
- **IsEmpty**: Verificar se a fila está vazia.
- **Size**: Obter o número de elementos na fila.

##

### Características

- **FIFO**: A principal característica de uma fila é que o primeiro elemento a ser inserido é o primeiro a ser removido.
- **Restrições de Acesso**: Os elementos são adicionados ao final e removidos do início da fila.
- **Uso de Memória**: Pode ser implementada de maneira fixa (com arrays) ou dinâmica (com listas ligadas).

##

### Aplicações Comuns de Filas
- **Gerenciamento de Tarefas**: Fila de impressão, onde documentos são processados na ordem em que são enviados para a impressora.
- **Sistemas de Atendimento**: Fila de atendimento em bancos ou call centers, onde os clientes são atendidos na ordem de chegada.
- **Processamento de Dados**: Em sistemas de processamento em lotes ou pipelines, as filas são usadas para garantir que os dados sejam processados na ordem correta.
- **Redes de Computadores**: Gerenciamento de pacotes de dados em roteadores e switches, onde os pacotes são processados na ordem em que chegam.
- **Sistemas Operacionais**: Gerenciamento de processos e threads em filas de espera.

##

### Vantagens e Desvantagens
#### Vantagens:
- Simplicidade na implementação.
- Operações de inserção e remoção são rápidas, com complexidade O(1).
#### Desvantagens:
- Acesso limitado (apenas ao início e ao final da fila).
- Pode causar problemas de overflow se implementada com um array de tamanho fixo e não for gerida corretamente.

##

### Implementação
Uma fila pode ser implementada usando arrays (vetores) ou listas ligadas.Segue um exemplo básico de código em C++:
- https://github.com/joseeduardoleite/estrutura-de-dados-cpp/tree/main/Queue
