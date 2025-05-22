/*Implemente uma função em C que receba um número inteiro positivo N como parâmetro e retorne o seu fatorial. 
O fatorial de N é definido como:

N!=N×(N−1)×(N−2)×...×1
Considere que 0! = 1.

Na função main, solicite ao usuário um valor para N, chame a função para calcular o fatorial e exiba o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int receba(int numero){
    int fatorial = 1;

    for (int i = numero; i > 0; i--){
        fatorial = fatorial * i;
    }
    return fatorial;   
}

int main() {
    int N;
    printf("Qual o valor de N: ");
    scanf(" %d", &N);

    int fatorado = receba(N);
    printf("O %d fatorado é %d\n", N, fatorado);
    
    return 0;
}