/*
Faça um programa que receba valores enquanto eles estiverem no intervalo de 500 a 1000.
 Ao receber um valor fora da faixa, o programa deverá parar de solicitar valores, 
 exibir quantos valores válidos foram digitados e finalizar.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor; 
    int contador;
    contador = 0;

    do{
        printf("Digite um valor: ");
        scanf("%f", &valor);
        contador++;
    } while (valor >= 500 && valor <= 1000);

    printf("Foram registrados %d valores.\n",contador-1);
    
    return 0;
}