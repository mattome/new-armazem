/*Faça um programa que receba um nome e um sobrenome. Ele deve construir uma nova string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[20], sobrenome[20];

    printf("Digite o nome: ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome,"\n")]= '\0';
    setbuf(stdin, NULL);

    printf("Digite o sobrenome: ");
    fgets(sobrenome, 20, stdin);
    sobrenome[strcspn(sobrenome,"\n")]= '\0';
    setbuf(stdin, NULL);

    printf("String formato americano: %s, %s. \n", sobrenome, nome); 

    return 0;
}