/*Faça um programa que simule um jogo, onde o usuário deverá descobrir um número aleatório escolhido pelo computador (de 1 a 100).
O usuário poderá realizar até 6 tentativas, o programa deverá retornar as mensagens “muito alto”, 
“muito baixo” até o usuário acertar o número ou esgotar o número máximo de tentativas

Dica: Pesquise sobre como gerar um numero aleatório  utilizando a função rand da biblioteca math.h

Texto de resposta Questão 9*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, numero, aleatorio;
    i = 1;
    srand(time(NULL));
    aleatorio = rand() % 100 + 1;
    printf("%d \n", aleatorio);
    
    while(i < 6){
        printf("Digite um valor de 1 a 100: ");
        scanf("%i", &numero);
        if (numero == aleatorio){
            printf("Você acertou, parabens!\n");
            break;
        }else if(numero > aleatorio){
            printf("Muito alto.\n");
        }else {
            printf("Muito baixo.\n");
        }
        i++;
        if (i == 6){
            printf("Suas tentativas acabaram.\n");
        }
    }
    return 0;
}