/*Faça um programa que receba uma frase 
e depois exiba quantas vezes cada vogal aparece. Ele deve contar considerando o tamanho da String.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char frase[30];
    int vogalA = 0, vogalE = 0, vogalI = 0, vogalO = 0, vogalU = 0;

    printf("Digite uma frase:");
    fgets(frase, 30, stdin);
    frase[strcspn(frase,"\n")]='\0';
    setbuf(stdin, NULL);


    for (int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == 'a' || frase[i] == 'A'){
            vogalA++;
        } 
        if(frase[i] == 'e' || frase[i] == 'E'){
            vogalE++;
        }
        if(frase[i] == 'i' || frase[i] == 'I'){
            vogalI++;
        } 
        if(frase[i] == 'o' || frase[i] == 'O'){
            vogalO++;
        } if(frase[i] == 'u' || frase[i] == 'U'){
            vogalU++;
        }  
    }
    
    printf("A vogal a apareceu %d vezes.\n", vogalA);
    printf("A vogal e apareceu %d vezes.\n", vogalE);
    printf("A vogal i apareceu %d vezes.\n", vogalI);
    printf("A vogal o apareceu %d vezes.\n", vogalO);
    printf("A vogal u apareceu %d vezes.\n", vogalU);

    return 0;
}