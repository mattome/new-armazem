/*Escreva uma função em C que receba a média final de um aluno (número real) como parâmetro e 
retorne seu conceito de acordo com a seguinte escala:

Média entre 9 e 10: Conceito A
Média entre 7 e 8.9: Conceito B
Média entre 5 e 6.9: Conceito C
Média entre 0 e 4.9: Conceito D
Na função main, solicite ao usuário que informe a média final, chame a função e exiba o conceito correspondente.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float conceito(float perimetro){
    if(9 <= perimetro && perimetro <= 10){
        printf("Conceito A\n");
    } else if(7 <= perimetro && perimetro <= 8.9){
        printf("Conceito B\n");
    } else if(5 <= perimetro && perimetro <= 6.9){
        printf("Conceito C\n");
    } else if(0 <= perimetro && perimetro <= 4.9){
        printf("Conceito D\n");
    } else {
        printf("Você digitou um número inválido.\n");
    }
    return 0;
}

int main() {
    float mediaFinal;

    printf("Digite a media: ");
    scanf(" %f", &mediaFinal);

    conceito(mediaFinal);
   
    return 0;
}