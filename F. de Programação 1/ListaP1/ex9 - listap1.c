/*
9) Faça um programa que receba o dia, mês e ano de uma data e informe se é uma data válida ou não
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int dia,mes,ano;

do{
    printf ("Entre com o dia [1,31]: ");
    scanf ("%d", &dia);
    }while(dia < 1 || dia > 31);
    
do{
    printf ("Entre com o mes [1,12]: ");
    scanf ("%d", &mes);
    }while(mes < 1 || mes > 12);
    

    printf ("Entre com o ano: ");
    scanf ("%d", &ano);
        
    if(ano % 4 == 0 || ano % 100 != 0 || ano % 400 == 0){
      printf ("\nO ano %d e bissexto.\n", ano);
      if()          
    } 
     printf ("\nData: %d/%d/%d \n\n", dia, mes, ano);
   return 0;
}