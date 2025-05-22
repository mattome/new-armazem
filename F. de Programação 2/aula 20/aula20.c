#include <stdio.h>
#include <stdlib.h>

int main(){
    //int vetor[5];
    int tamanho = 10;
    int *vetor;
    vetor = (int*) malloc( tamanho * sizeof(int));
    vetor = (int*) calloc( tamanho, sizeof(int));

    if(vetor == NULL){
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++){
        vetor[i] = i;
    }
    
    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    tamanho = 20;
    vetor = (int*)realloc(vetor, tamanho * sizeof(int));
    if (vetor == NULL){
        printf("Erro ao reallocar memoria!\n");
        exit(1);
    }
    for (int i = 0; i < tamanho; i++){
        vetor[i] = i;
    }
    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);//libera a memoria alocada
    //evita
    return 0;
}