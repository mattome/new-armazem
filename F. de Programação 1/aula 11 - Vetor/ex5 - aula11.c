/*

Dado dois vetores, A (4 elementos) e B (5 elementos), faça um programa que imprima todos os elementos comuns aos dois vetores.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int vetorA[4];
    int vetorB[5];

    for (int i = 0; i < 4; i++){
        printf("Elemento %d:", i + 1);
        scanf("%d", &vetorA[i]);
    }
    
    for (int i = 0; i < 5; i++){
        printf("Elemento %d:", i + 1);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 5; i++){
        if (vetorA[1] == vetorB[i]){
            printf("%d é um elemento comum entre os vetores\n", vetorA[1]);
        }
    }

    for (int i = 0; i < 5; i++){
        if (vetorA[2] == vetorB[i]){
            printf("%d é um elemento comum entre os vetores\n", vetorA[2]);
        }
    }

    for (int i = 0; i < 5; i++){
        if (vetorA[3] == vetorB[i]){
            printf("%d é um elemento comum entre os vetores\n", vetorA[3]);
        }
    }

    for (int i = 0; i < 5; i++){
        if (vetorA[4] == vetorB[i]){
            printf("%d é um elemento comum entre os vetores\n", vetorA[4]);
        }
    }

    return 0;
}