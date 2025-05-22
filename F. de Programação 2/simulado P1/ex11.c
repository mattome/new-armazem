//11) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int somaVetor(int vetor[], int tamanho){
        if(tamanho == 1){
            return vetor[1];
        }
        return vetor[tamanho] + somaVetor(vetor, tamanho - 1);
}

int main() {
    int tamanho = 10;
    int vetor[] ={0,1,2,3,4,5,6,7,8,9};

    int resultado = somaVetor(vetor, tamanho);
    printf("A soma dos elementos do vetor é %d\n", resultado);

    return 0;
}