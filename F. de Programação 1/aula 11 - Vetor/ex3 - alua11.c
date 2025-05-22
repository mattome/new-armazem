/*Leia um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. 
Escreva um programa que determine e escreva a quantidade de pessoas que possuem idade superior a 35 anos*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int vetorA[10];
    int idade = 0;

    for (int i = 0; i < 10; i++){
        printf("idade %d:",i + 1);
        scanf("%d", &vetorA[i]);
    }
    
    for (int i = 0; i < 10; i++){
        if(vetorA[i] > 35){
            idade++;
        }
    }
    printf("Tem %d pessoas com mais de 35 anos", idade);

    return 0;
}