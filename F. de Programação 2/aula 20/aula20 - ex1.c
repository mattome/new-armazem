/*Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. 
Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int tamanho;
    int *vetor;

    printf("Qual o tamnho do vetor? ");
    scanf("%d", &tamanho);

    vetor = (int*) malloc( tamanho * sizeof(int));

    if(vetor == NULL){
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
   
    return 0;
}