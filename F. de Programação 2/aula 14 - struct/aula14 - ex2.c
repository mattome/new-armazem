/*Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: local, horário e texto que descreve o compromisso.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct horario{
    int hora;
    int minutos;
    int segundos;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    char local[50];
    char texto[50];
};

int main() {
    //horário
    struct horario horas, horasCompromisso;
    
    printf("Que horas são agora? ");
    scanf("%i %i %i", &horas.hora, &horas.minutos, &horas.segundos);
    
    //data
    struct data dt;
    printf("Qual é a data de hoje? ");
    scanf("%i %i %i", &dt.dia, &dt.mes, &dt.ano);

    printf("Agora são %i:%i:%i da data de %.i/%.i/%.i\n", horas.hora, horas.minutos, horas.segundos, dt.dia, dt.mes, dt.ano);

    //compromisso
      //local
    struct compromisso comp;
    printf("Qual o local do compromisso? ");
    setbuf(stdin,NULL);
    fgets(comp.local,50,stdin);
    comp.local[strcspn(comp.local,"\n")]='\0';

     //horario
    printf("Qual a hora do compromisso? ");
    scanf("%i %i %i", &horasCompromisso.hora, &horasCompromisso.minutos, &horasCompromisso.segundos);
    
     //texto
     printf("Descreva o compromisso? ");
     setbuf(stdin,NULL);
     fgets(comp.texto,50,stdin);
     comp.texto[strcspn(comp.texto,"\n")]='\0';

    printf("O local do compromisso é %s as %i:%i:%i e é sobre %s", comp.local, horasCompromisso.hora, horasCompromisso.minutos, horasCompromisso.segundos, comp.texto);

    return 0;
}