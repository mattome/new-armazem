/*
7) Considerando uma aplicação de renda fixa, faça um programa que receba o capital investido, a taxa (em %) e a quantidade de meses. 
O programa deverá retornar o montante final considerando o desconto do imposto de renda segundo regras abaixo:

22,5% - prazo inferior a 6 meses
20% - de 6 a 12 meses
17,5% - de 12 a 24 meses
15% - igual ou superior a 24 meses

Obs: O imposto é calculado apenas sobre o lucro da aplicação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int capital_investido, taxa, quantidade_meses;

    printf("Quanto capital foi investido: ");
    scanf("%d", capital_investido);
    printf("Qual a taxa em porcentagem (escreva só o número): ");
    scanf("%d", taxa);
    printf("Quantos meses foram investidos: ");
    scanf("%d", quantidade_meses);
    
 
    return 0;
}