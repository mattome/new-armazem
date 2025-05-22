/*3) Faça um programa que solicite o tamanho de um quadrado e mostre a borda de um quadrado utilizando o caracter #.
Exemplo:
Digite o tamanho desejado: 10

#	#	#	#	#	#	#	#	#	#
#									#
#									#
#									#
#									#
#									#
#									#
#									#
#									#
#	#	#	#	#	#	#	#	#	#*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int t;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &t);


    for (int i = 0; i < t; i++){
        printf("#");
    }

    printf("\n");

    for (int i = 2; i < t; i++){
        printf("#");
        for (int i = 2; i < t; i++){
        printf(" ");
    }
    printf("#\n");
    }

    for (int i = 0; i < t; i++){
        printf("#");
    }
   
    return 0;
}