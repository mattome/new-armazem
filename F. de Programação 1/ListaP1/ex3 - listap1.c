/*
3) Faça um programa que tenha como entrada:
 o número de horas, minutos e segundos atuais, informe quantos segundos faltam para chegar terminar o dia.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int hora, minuto, segundos, segundos_faltantes, minutos_faltantes, horas_faltantes, segundos_totais;
    int horas_minutos, hora_minutos_segundos, minutos_segundos;

    printf("Quantas horas tem agora: ");
    scanf("%d", &hora);

    horas_faltantes = 24 - hora;
    horas_minutos = hora*60;
    hora_minutos_segundos = horas_minutos*60;

    printf("Quantos minutos tem agora: ");
    scanf("%d", &minuto);

    minutos_faltantes = 60 - minuto;
    minutos_segundos = minuto*60;

    printf("Quantos segundos tem agora: ");
    scanf("%d", &segundos);

    segundos_faltantes = 60 - segundos;

    segundos_totais = hora_minutos_segundos + minutos_segundos + segundos_faltantes;

    printf("Faltam %d segundo para acabar o dia", segundos_totais);
    
    return 0;
}