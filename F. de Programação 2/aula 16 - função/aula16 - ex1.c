/*Implemente uma função em C que receba três números inteiros como parâmetros e retorne o maior deles.
 Na função main, chame essa função com diferentes valores de teste e exiba o resultado na tela. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int maiorNumero(int num1, int num2, int num3){
    int maior = num1;

    if(maior < num2){
        maior = num2; 
    }
    else if(maior < num3){
        maior = num3; 
    }
    return maior;
}

int main() {
    
    int resultado1 = maiorNumero(10, 25, 15);
    printf("Maior entre 10, 25 e 15: %d\n", resultado1);

    int resultado2 = maiorNumero(100, 50, 75);
    printf("Maior entre 100, 50 e 75: %d\n", resultado2);

    int resultado3 = maiorNumero(-5, -1, -10);
    printf("Maior entre -5, -1 e -10: %d\n", resultado3);

    return 0;
}