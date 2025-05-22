/*Reescreva o exercício anterior utilizando a estrutura horário (contendo hora, minuto e segundo)
 e passando a estrutura por referência. Utilize o seguinte protótipo da função:
void converteHorario(int total_segundos, Horario* hor)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
    int hora, min, seg;
}Horario;


void converteHora(int total_segundos, Horario* hor){
//A expressão:hor->x++;
//É equivalente a:(*hor).x++;
    hor->hora = 0;
    hor->min = 0;
    hor->seg = 0;

    do{
        if(total_segundos > 59){
            (*hor).min++;
            total_segundos -= 60;
        }
    }while(total_segundos > 59);//enquato o valor for maior que 59 ele vai contiuar

    hor->seg = total_segundos;

    do{
        if(hor->min > 59){
            hor->hora++;
            hor->min -= 60;
        }
    }while(hor->min > 59);//enquato o valor for maior que 59 ele vai contiuar

    return;
}

int main(){
    int total_segundos = 63;
    Horario horario;

    converteHora(total_segundos, &horario);
    printf("%d:%d:%d\n", horario.hora, horario.min, horario.seg);

    return 0;
   }//main
   