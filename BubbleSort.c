#include <stdio.h>

// Função para realizar o Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int numeros[] = {5, 3, 8, 4, 2};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    //printf("%d\n", tamanho);

    printf("Vetor original: ");
    imprimirVetor(numeros, tamanho);

    bubbleSort(numeros, tamanho);

    printf("Vetor ordenado: ");
    imprimirVetor(numeros, tamanho);

    return 0;
}
