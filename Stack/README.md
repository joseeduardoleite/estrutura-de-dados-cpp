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