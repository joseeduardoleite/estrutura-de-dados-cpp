#include <iostream>
#include <vector>

int buscaBinaria(const std::vector<int>& vetor, int valor) {
    int inicio = 0;
    int fim = vetor.size() - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == valor) {
            return meio; // Elemento encontrado
        }

        if (vetor[meio] < valor) {
            inicio = meio + 1; // Buscar na metade direita
        } else {
            fim = meio - 1; // Buscar na metade esquerda
        }
    }

    return -1; // Elemento não encontrado
}

int main() {
    std::vector<int> vetor = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int valorProcurado = 70;
    int indice = buscaBinaria(vetor, valorProcurado);

    if (indice != -1) {
        std::cout << "Elemento " << valorProcurado << " encontrado no indice: " << indice << std::endl;
    } else {
        std::cout << "Elemento não encontrado." << std::endl;
    }
    std::cout << "Digite qualquer numero e pressione 'enter' para encerrar\n";

    int end;
    std::cin >> end;

    return 0;
}