/*
Desenvolva um programa que receba um numero tamanho e exiba um quadrado de tamanho tamanho utilizando o carácter  #

Digite o tamanho: 5
#####
#####
#####
#####
#####

Dica: Para a exibição utilize apenas os comandos
printf(“#”);  e  printf(“\n”);
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int tamanho;

    // Solicita o tamanho do quadrado
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    // Loop externo para as linhas
    for (int i = 0; i < tamanho; i++) {
        // Loop interno para as colunas
        for (int j = 0; j < tamanho; j++) {
            printf("#"); // Exibe o caractere #
        }
        printf("\n"); // Quebra de linha após cada linha do quadrado
    }

    return 0;
}