//Faça um programa que receba 10 números e calcule o quadrado desse número (um de cada vez)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numero, contador, quadrado;
    
    for(contador = 0; contador <=10; contador++){
        printf("Digite um número: ");
        scanf("%d", &numero);
        quadrado = pow(numero, 2);
        printf("%d ao quadrado é %d\n", numero, quadrado);
    }

    return 0;
}