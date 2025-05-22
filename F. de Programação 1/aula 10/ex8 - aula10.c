/*
Utilizando a estrutura do laço for aninhado, crie um programa que exiba a tabuada de todos os números  de 1 a 10 no seguinte formato:

Tabuada do 1:
1 x 1 =  1
1 x 2 =  2
1 x 3 =  3
...

Tabuada do 5:
5 X 1 =  5
5 X 2 = 10
5 X 3 = 15
...
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int tabuada;

    printf("Quantas tabuadas você quer saber: ");
    scanf("%d", &tabuada);

    for(int contador = 1; contador <= tabuada; contador++){
        printf("Tabuada do %d\n", contador);
        printf("%d x 1 = %d\n", contador, contador*1);
        printf("%d x 2 = %d\n", contador, contador*2);
        printf("%d x 3 = %d\n", contador, contador*3);
        printf("%d x 4 = %d\n", contador, contador*4);
        printf("%d x 5 = %d\n", contador, contador*5);
        printf("%d x 6 = %d\n", contador, contador*6);
        printf("%d x 7 = %d\n", contador, contador*7);
        printf("%d x 8 = %d\n", contador, contador*8);
        printf("%d x 9 = %d\n", contador, contador*9);
        printf("%d x 10 = %d\n", contador, contador*10);
        printf("\n");
    }

    return 0;
}