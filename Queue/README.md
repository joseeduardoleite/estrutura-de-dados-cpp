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