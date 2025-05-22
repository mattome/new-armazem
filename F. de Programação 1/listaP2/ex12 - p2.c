/*Desenvolva um programa que receba uma frase. O programa deverá gerar e exibir uma nova string,
 contendo uma "palavra sim e outra não" da frase digitada, e exibir o número de palavras da frase original.

Exemplo:
Digite uma frase: A arte de programar consiste em organizar e dominar a complexidade.
Saída
A de consiste organizar dominar complexidade.
Número de palavras: 11*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char frase[30];

    printf("Digite uma frase: ");
    fgets(frase, 30, stdin);
    frase[strcspn(frase, "\n")]='\0';
    setbuf(stdin,NULL);

    printf("%s", frase);

    char simnao[30];

    for (int i = 0; i < 30; i++){
        if(frase[i] != ' '){
            strcpy(<simnao[i]>,<frase[i]>);

        }else{
            strcpy(<simnao[i]>,<frase[i]>);

        }
    }
    



    return 0;
}