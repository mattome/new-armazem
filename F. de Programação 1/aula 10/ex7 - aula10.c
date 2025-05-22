/*
Faça um programa que mostre n elementos da sequência de Fibonacci.
O valor de n é passado para o programa.
O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir a fórmula tn = tn-1 + tn-2

Obs.: Assista ao video do moodle para entender a sequência

Texto de resposta Questão 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, contador, t1, t2;

    printf("Quantos elementos de fibonacci você que: ");
    scanf("%d", &n);

     if (n <= 0) {
        printf("Por favor, insira um número maior que 0.\n");
        return 1;
    }

    t1 = 0;
    t2 = 1;

    for(contador = 1; contador <= n; contador++){

        // Calcula o próximo termo
        int proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
        printf("%d ", t1); // Exibe o termo atual
    }

    return 0;
}