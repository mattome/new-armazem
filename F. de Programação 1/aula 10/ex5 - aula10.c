//Faça um programa que calcule o fatorial de um número a ser digitado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numero;
    unsigned long long fatorial = 1; // Variável para armazenar o fatorial

    // Solicita o número ao usuário
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    // Verifica se o número é válido (não negativo)
    if (numero < 0) {
        printf("Não é possível calcular o fatorial de números negativos.\n");
    } else {
        // Calcula o fatorial usando o for
        for (int i = 1; i <= numero; i++) {
            fatorial *= i; // Multiplica o fatorial pelo número atual
        }

        // Exibe o resultado
        printf("O fatorial de %d é: %llu\n", numero, fatorial);
    }

    return 0;
}