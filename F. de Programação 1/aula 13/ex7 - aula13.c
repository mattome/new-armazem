/*Escreva um programa que receba uma sigla de um estado da região Sul ou Sudeste e exiba o nome completo do estado correspondente.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char sigla[3];

    printf("Escreva uma sigla de um estado da região Sul ou Sudeste: "); 
    fgets(sigla, 3, stdin);
    sigla[strcspn(sigla, "\n")] = '\0';
    setbuf(stdin, NULL);   

    for (int i = 0; sigla[i] != '\0'; i++) {
        sigla[i] = toupper(sigla[i]);
    }

    //Paraná (PR), Santa Catarina (SC) e Rio Grande do Sul (RS).
    if(sigla[0] == 'P' && sigla[1] == 'R'){printf("Paraná\n");}
    else if(sigla[0] == 'S' && sigla[1] == 'C'){printf("Santa Catarina\n");}
    else if(sigla[0] == 'R' && sigla[1] == 'S'){printf("Rio Grande do Sul\n");}
    
    //Espírito Santo (ES), Minas Gerais (MG), Rio de Janeiro (RJ), São Paulo (SP)
    else if(sigla[0] == 'M'){printf("Minas Gerais\n");}
    else if(sigla[0] == 'E'){printf("Espírito Santo\n");}
    else if(sigla[0] == 'S' && sigla[1] == 'P'){printf("São Paulo\n");}
    else if(sigla[0] == 'R' && sigla[1] == 'J'){printf("Rio de Janeiro\n");}
    else{printf("Nenhum estado do sul ou do sudeste foi escolhido");}

    return 0;
}