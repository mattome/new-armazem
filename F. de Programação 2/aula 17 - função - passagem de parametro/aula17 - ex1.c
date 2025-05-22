/*Escreva um programa que receba um número inteiro representando a quantidade total de segundos e, 
usando passagem de parâmetros por referência, converta a quantidade informada de segundos em Horas, 
Minutos e Segundos. Imprima o resultado da conversão no formato HH:MM:SS. Utilize o seguinte protótipo da função:
void converteHora(int total_segundos, int* hora, int* min, int* seg)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void converteHora(int total_segundos, int* hora, int* min, int* seg){
    *hora = 0;
    *min = 0;
    *seg = 0;

    do{
        if(total_segundos > 59){
            (*min)++;
            total_segundos -= 60;
        }
    }while(total_segundos > 59);//enquato o valor for maior que 59 ele vai contiuar

    (*seg) = total_segundos;

    do{
        if((*min) > 59){
            (*hora)++;
            (*min) -= 60;
        }
    }while((*min) > 59);//enquato o valor for maior que 59 ele vai contiuar

    return;
}

int main(){
    int total_segundos = 60;
    int hora, minutos, segundos;

    converteHora(total_segundos, &hora, &minutos, &segundos);
    printf("%d:%d:%d\n", hora, minutos, segundos);

    return 0;
   }//main
   