#include <stdio.h>

// Função recursiva para somar os elementos do vetor
int somaVetor(int vetor[], int n) {
    if (n == 0)
        return 0;
    else
        return vetor[n - 1] + somaVetor(vetor, n - 1);
}

// Função que calcula a média usando a soma recursiva
double mediaVetor(int vetor[], int n) {
    if (n == 0) return 0;
    int soma = somaVetor(vetor, n);
    return (double)soma / n;
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    double media = mediaVetor(vetor, tamanho);
    printf("A média dos elementos do vetor é: %.2f\n", media);

    return 0;
}
