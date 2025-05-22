/*Crie um programa que forneça um menu com duas opções. Caso o usuário digite 1, o programa
solicitará um número e verificará se o valor é par ou impar. Caso o usuário digite 2, o programa solicitará
uma idade e verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:
Menu de programa:
1 – Verifica par/impar
2 – Verifica maior/menor de idade
Digite sua opção:

Texto de resposta Questão 1*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, numero, idade;

    printf("Menu de programa: \n");
    printf("1 – Verifica par/impar\n");
    printf("2 – Verifica maior/menor de idade\n");

    printf("Digite a opção escolhida: ");
    scanf("%i",&opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite um número: ");
        scanf("%i", &numero);

        if(numero % 2 == 0){
            printf("O número %i é par.\n", numero);
        }else{
            printf("O número %i é impar.\n", numero);
        }
        break;
    
    case 2:
        printf("Digite sua idade: ");
        scanf("%i", &idade);
        if(idade < 18){
            printf("Você é menor de idade.\n");
        }else{
            printf("Voê é maior de idade.\n");
        }
    default:
        printf("nenhuma opção foi selecionada.\n");
        break;
    }
   return 0;
}