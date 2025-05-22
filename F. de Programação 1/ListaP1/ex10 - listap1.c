/*
10) Desenvolva um programa que receba um valor de 1 a 99 e exiba o valor por extenso
Ex:
Digite um Número: 74
Valor por extenso: setenta e quatro
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int dezena, unidade;

    printf("Menu de programa das dezenas: \n");
    printf("1 - para 11 a 19\n");
    printf("2 - Para vinte\n");
    printf("3 - Para trinta\n");
    printf("4 - Para quarenta\n");
    printf("5 - Para cinquenta\n");
    printf("6 - Para secenta\n");
    printf("7 - Para setenta\n");
    printf("8 - Para ointenta\n");
    printf("9 - Para noventa\n");

    printf("Digite a opção escolhida: ");
    scanf("%c", &dezena);

    switch (dezena)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }
 
   return 0;
}