/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. 
Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int* funcao(int n){
    if (n <= 0){
        return NULL;
    }

    int *vetor = (int) malloc(n * sizeof(int));
    return vetor;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* meuVetor = funcao(tamanho);

    if (meuVetor == NULL) {
        printf("Tamanho inválido ou erro na alocação de memória.\n");
        return 1;
    }

    // Exemplo: preenchendo o vetor com índices
    for (int i = 0; i < tamanho; i++) {
        meuVetor[i] = i;
    }

    printf("Vetor alocado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", meuVetor[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(meuVetor);

    return 0;
}
