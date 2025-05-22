/*Faça um programa que receba uma palavra e em seguida gere e exiba uma outra string contendo a palavra 
concatenada da mesma palavra invertida, porém em maiúscula. Dica: usar a função toupper() da biblioteca ctype.h para 
transformar uma letra na sua letra maiúscula.

Exemplo:
Digite uma palavra: Brasil
BrasilLISARB*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char palavra[20];

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);
    palavra[strcspn(palavra, "\n")]='\0';
    setbuf(stdin, NULL);

    char invertida[20];

    for (int i = 20; i > 0; i++){
        
    }
    
   
    return 0;
}