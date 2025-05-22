/*
5) Faça um programa que receba 2 números referentes ao numerador e denominador de uma fração e 
informe se é uma fração própria, imprópria, ou aparente
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numerador, denominador, fracao;

    printf("Digite o númerador de uma fração: ");
    scanf("%d", &numerador);

    printf("Digite o denominador de uma fração: ");
    scanf("%d", &denominador);

    fracao = numerador/denominador;
    
    //Fração Própria: é uma frações em que o numerador é menor que o denominador, ou seja, representa um número menor que um inteiro.
    //Fração imprópria: é uma fração onde o numerador é maior ou igual ao denominador.
    //Fração aparente: é aquela cujo numerador é um múltiplo do denominador e aparenta ser uma fração mas não é, pois representa um número inteiro.

     
    if(numerador <= denominador){
        printf("Essa fração é uma função própria.\n");
    }else if(numerador >= denominador && numerador%denominador == 0){
        printf("Essa função é uma função aparente\n");
    }else{
        printf("Essa função é uma função imprópira");
    }

    return 0;
}