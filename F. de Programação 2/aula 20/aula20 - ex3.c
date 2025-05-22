/*Escreva uma função que receba como parâmetro dois vetores via referência( A e B) e o tamanho N.
 A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que:
C[i] = A[i] * B[i]*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int* funcao(int *a, int *b, int n){
    int *c = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++){
        c[i] = a[i] * b[i];
    }
    
    return c;
}

int main() {
    int tamanho;

    printf("qual o tamnho dos vetores? ");
    scanf("%d", &tamanho);

    int *vetorA = (int*)malloc(tamanho*sizeof(int));

    int valorA = 2;
    for (int i = 0; i < tamanho; i++){
        vetorA[i] = valorA;
        valorA += 8; 
    }

    int *vetorB = (int*)malloc(tamanho*sizeof(int));
    
    int valorB = 1;
    for (int i = 0; i < tamanho; i++){
        vetorB[i] = valorB;
        valorB += 5;
    }

    int *vetorC = funcao(vetorA, vetorB, tamanho);

    if(vetorC == NULL){
        printf("Tamanho inválido ou erro na alocação de memória.\n");
        return 1;
    }
    
    printf("Vetor alocado: \n");
    for (int i = 0; i < tamanho; i++){
        printf("%d\n", vetorC[i]);
    }
    printf("\n");

    free(vetorC);
    
   
    return 0;
}