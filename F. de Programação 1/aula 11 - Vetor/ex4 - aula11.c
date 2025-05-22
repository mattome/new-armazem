/*
Crie e inicialize um vetor de inteiros de tamanho 8. Faça a soma dos seus elementos, e apresente o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int vetor[8];
    int vetorSoma = 0;

    for (int i = 0; i < 8; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        vetorSoma = vetorSoma + vetor[i];
    }
    printf("A Soma dos valores do vetor é %d", vetorSoma);

    return 0;
}