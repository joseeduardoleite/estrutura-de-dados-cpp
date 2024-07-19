## Busca Binária
A **busca binária** é um algoritmo eficiente para encontrar um elemento em uma lista ordenada. O principal requisito para aplicar a busca binária é que a lista deve estar ordenada. A busca binária funciona dividindo repetidamente a lista pela metade até que o elemento desejado seja encontrado ou até que a sublista se torne vazia.
##
### Passos da Busca Binária:
1. **Inicialização**: Defina dois ponteiros, '***início***' e '***fim***', que representam o início e o fim da lista.
2. **Cálculo do Meio**: Calcule o índice do meio da lista usando a fórmula: '***meio = (início + fim) / 2***'.
3. **Comparação**:
   1. Se o elemento no meio é o elemento procurado, a busca termina.
   2. Se o elemento no meio é maior que o elemento procurado, ajuste o ponteiro '***fim***' para '***meio - 1***'.
   3. Se o elemento no meio é menor que o elemento procurado, ajuste o ponteiro '***início***' para '***meio + 1***'.
4. **Repetição**: Repita os passos 2 e 3 até que o elemento seja encontrado ou que '***início***' seja maior que '***fim***'.
##
### Busca Binária em Listas Lineares Sequenciais e Encadeadas

#### Listas Lineares Sequenciais
A busca binária é altamente eficiente em **listas lineares sequenciais** (arrays), devido ao acesso direto aos elementos pelo índice. A complexidade de tempo é **𝑂(log⁡ 𝑛)**, onde 𝑛 n é o número de elementos na lista. Essa eficiência é devida à divisão constante do espaço de busca pela metade.

#### Listas Encadeadas
A busca binária não é adequada para **listas encadeadas**. Isso ocorre porque listas encadeadas não permitem acesso direto aos elementos. Em uma lista encadeada, acessar o elemento do meio requer percorrer metade da lista, resultando em uma complexidade de tempo linear **𝑂(𝑛)** para encontrar o elemento do meio. Portanto, a busca binária em listas encadeadas não oferece vantagem em termos de eficiência sobre a busca linear simples, que também tem complexidade **𝑂(𝑛)**.
##
### Conclusão
- **Busca Binária** é ideal para listas lineares sequenciais ordenadas devido ao acesso direto aos elementos e sua complexidade **𝑂(log⁡𝑛)**.

- **Listas Encadeadas** não são adequadas para busca binária devido à falta de acesso direto aos elementos, tornando a busca binária ineficiente.