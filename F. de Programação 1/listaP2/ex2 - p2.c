/*2 Crie um programa que receba um número positivo Z e imprima todos os números de Z até 1
 e no final exiba quais são os números múltiplos de 4, quantos números são múltiplos de 3 e a média dos números múltiplos de 5.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroZ, multiplo5 = 0;
    float media5 = 0;

    do{
        printf("Digite um numero positivo: ");
        scanf("%d", &numeroZ);
    }while(numeroZ < 0);

    for (int i = numeroZ; i >= 1;){
        printf("%d\n", i--);
    }
    
    printf("Os números multiplos de 4 de Z: \n");

    for (int i = 0; i <= numeroZ ; i++){

        if(i % 4 == 0){
            printf("%d\n", i);
        }
    }


    printf("Os números multiplos de 3 de Z: \n");

    for (int i = 0; i <= numeroZ ; i++){
        if(i % 3 == 0){
            printf("%d\n", i);
        }
    }


    for (int i = 0; i <= numeroZ ; i++){
        if(i % 5 == 0){
            media5 += i;
            multiplo5++;
        }
    }
    media5 = media5/multiplo5;
    printf("A média dos multiplos de 5 é: %.2f", media5);
    
    
    return 0;
}