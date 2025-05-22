/*
11) Desenvolva um algoritmo que receba vários números no intervalo fechado de 1 a 1000. 
Ao receber um valor fora da faixa, o programa deverá exibir a soma dos números pares e o produto dos números ímpares e finalizar.
Obs: O valor fora da faixa utilizado para sair não deverá entrar na conta da soma nem do produto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, p, numero;
    numero = 1;
    p = 0;
    i = 1;

    while(numero >= 1 && numero <= 1000){
        printf("Digite um número de 1 a 1000:");
        scanf("%i", &numero);

        if(numero % 2 == 0 && numero > 0 && numero < 1000){
            p = p + numero;   
        }else if(numero % 2 != 0 && numero > 0 && numero < 1000){
            i = i*numero;
        }
    }
    if(i != 1){
        printf("O produto dos números ímpares é %i\n", i);
    }else{
        printf("Não teve números ímpares maiores que 1.\n");
    }
    printf("A soma dos números pares é %i.\n", p);
   
   return 0;
}