/*
8) Crie um programa que, ao receber três números, verifique se podem ser lados de um triângulo e nesse caso mostre se o triângulo 
é equilátero, isosceles ou escaleno. Caso seja um triângulo retângulo, o programa deve também informar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c;

    // Recebe os três lados do triângulo
    printf("Digite o primeiro lado: ");
    scanf("%f", &a);
    
    printf("Digite o segundo lado: ");
    scanf("%f", &b);
    
    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    // Verifica se os valores podem formar um triângulo
    if (a + b > c && a + c > b && b + c > a) {
        printf("Os valores formam um triângulo.\n");

        // Verifica o tipo do triângulo
        if (a == b && b == c) {
            printf("O triângulo é equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }

        // Verifica se é um triângulo retângulo usando o Teorema de Pitágoras
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
            printf("O triângulo é também retângulo.\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }
    return 0;
}