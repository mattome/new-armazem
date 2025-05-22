/*
4)Faça um programa que receba 3 idades distintas e mostre: a idade da pessoa mais velha; 
a idade da pessoa mais nova e a média das 3 idades . 
O programa deve considerar e informar o caso de 2 ou 3 pessoas terem a mesma idade.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade1, idade2, idade3, media, mais_velho, mais_novo;

    printf("Digite a idede da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Digite a idede da segunda pessoa: ");
    scanf("%d", &idade2);  

    printf("Digite a idede da terceira pessoa: ");
    scanf("%d", &idade3);

    mais_velho = 0;
    if( mais_velho < idade1){
        mais_velho = idade1;
    }
    if(mais_velho < idade2){
        mais_velho = idade2;
    }
    if(mais_velho < idade3){
        mais_velho = idade3;
    }
    printf("A idade mais velha é %d\n", mais_velho);

    mais_novo = 100000000;
    if( mais_novo > idade1){
        mais_novo = idade1;
    }
    if(mais_novo > idade2){
        mais_novo = idade2;
    }
    if(mais_novo > idade3){
        mais_novo = idade3;
    }
    
    if(idade1 == idade2 || idade1 == idade3 || idade2 == idade3){
        printf("Duas ou mais pessoas tem a mesma idade.\n");
    }

    printf("A idade mais nova é %d\n", mais_novo);

    media = (idade1, idade2, idade3)/3;
    printf("A média das idades é %d\n", media);

    return 0;
}