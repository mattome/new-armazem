/*Faça um programa que receba um nome, ele deve perguntar novamente caso o nome tenha tamanho inferior a 5 caracteres. 
Ao receber um nome com 5 caracteres ou mais o programa exibe o nome e finaliza.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[1][20];
    int i, tamanho;

    do{
        printf("Digite um nome: ");
        fgets(nome[0], 20, stdin);
        nome[0][strcspn(nome[0],"\n")]='\0';
        setbuf(stdin, NULL);

        tamanho = strlen(nome);

    } while (tamanho < 5);//enquanto o tamanho for menor que 5 ele sepre vai voltar para o do
    
    printf("O nome é: %s", nome[0]);

    return 0;
}