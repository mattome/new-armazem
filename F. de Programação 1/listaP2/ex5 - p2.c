/* Faça um programa que receba 10 números inteiros. Em seguida o programa deverá permitir o usuário buscar números dentro do vetor, informando 
se o mesmo está ou não no vetor. O usuário poderá realizar quantas buscas quiser e finalizar ao solicitar a busca de um valor negativo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int numero[10], procurado, f;

    for (int i = 0; i < 10; i++){
        printf("Digite o valor:");
        scanf("%d", &numero[i]);
    }

    do{
        printf("Qual número você quer encontrar no vetor: ");
        scanf("%d", &procurado);

        int encontrado = 0;
        for (int i = 0; i < 10; i++){
            if(procurado == numero[i]){
                printf("Este número está no vetor, ele é o vetor[%d].\n", numero[i]);
                encontrado = 1;
            }
        }
    
        if(encontrado == 0){
                printf("Número não encontrado.\n");
        }        
        
        printf("Deseja continuar a busca?(Digite um número negativo para parar)");
        scanf("%d", &f);
    }while(f > 0);
    

    return 0;
}