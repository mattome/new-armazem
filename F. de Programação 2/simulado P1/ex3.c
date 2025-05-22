/*3) Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída um triângulo lateral formado 
por asteriscos conforme o exemplo a seguir, em que usamos n = 4:
*
**
***
****
***
**
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void funcao(int n){
    // Parte crescente
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Parte decrescente
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


int main() {
    int numero = 4;

    funcao(numero);
   
    return 0;
}