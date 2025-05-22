/*7) Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros.
 Essa função deve retornar, por referência, dois valores: a soma dos números pares e ímpares.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define N 10

void calculando(int valor[], int *par, int *impar){
    for (int i = 0; i < N; i++){
        if (valor[i] % 2 == 0){
            *par += valor[i];
        }
        if (valor[i] % 2 != 0){
            *impar += valor[i];
        }
    }
}

int main() {
    int vetor[N] = {1,2,3,4,5,6,7,8,9,10};
    int par = 0;
    int impar = 0;
    
    
    calculando(vetor, &par, &impar);
    printf("A soma de todos os pares é %d\n", par);
    printf("A soma de todos os impares é %d\n", impar);    
   
    return 0;
}