/*
Faça um programa que receba e armazene 20 números em um vetor.

Em seguida exiba:

–Quantos números são iguais a 30;
–Quantos números são maior que a média;
–Quantos números são iguais à media;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int vetor[20];
    int iguaisTrinta = 0, media = 0, maioresMedia = 0, iguaisMedia = 0;

    for (int i = 0; i < 20; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);        
    }
    
    for (int i = 0; i < 20; i++){
        if(vetor[i] == 30){
            iguaisTrinta++;
        }
    }
    
    for (int i = 0; i < 20; i++){
        media = media + vetor[i];
    }
    media = media/20;

    for (int i = 0; i < 20; i++){
        if(vetor[i] > media){
            maioresMedia++;
        }
    }

    for (int i = 0; i < 20; i++){
        if(vetor[i] == media){
            iguaisMedia++;
        }
    }

    printf("A média é %d.\n", media);
    printf("Tem %d números que são iguais a 30.\n", iguaisTrinta);
    printf("Tem %d números maiores que a média.\n", maioresMedia);
    printf("Tem %d números iguais a média.\n", iguaisMedia);

    return 0;
}