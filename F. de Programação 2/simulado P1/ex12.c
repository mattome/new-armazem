//12) Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float mediaVetor(int vetor[], int tamanho){
    if(tamanho == 1){
        return vetor[tamanho];
    }
    return vetor[tamanho] + mediaVetor(vetor, tamanho - 1);
}

int main() {
    int tamanho = 10.0;
    int vetor[] ={0,1,2,3,4,5,6,7,8,9};

    float resultado = mediaVetor(vetor, tamanho);
    printf("A media dos elementos do vetor é %.2f\n", resultado/tamanho);
   
    return 0;
}