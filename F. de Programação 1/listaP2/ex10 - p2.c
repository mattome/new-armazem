/*Faça um programa que receba e armazene 10 nomes de carros (tamanho máximo: 20 caracteres). 
Em seguida, o programa deverá permitir a busca pelos nomes. Ao receber um carro, o sistema deverá 
informar se o carro está ou não na lista e quantas vezes ele está na lista. O programa deverá 
finalizar se for feita a busca por "Fusca", que deve ser informado também se está ou não na lista.
Exemplo da busca:
Digite o carro a ser buscado: Gol
O carro está na lista 1 vez.
Digite o carro a ser buscado: Vectra
O carro não está na lista.
Digite o carro a ser buscado: Fusca
O carro está na lista 2 vezes.
Fim de programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char carro[10][20];

    for (int i = 0; i < 10; i++){
        printf("Qual é o carro %d(escreva em maiusculo): ", i + 1);
        fgets(carro[i], 20, stdin);
        carro[i][strcspn (carro[i], "\n")]='\0';
        setbuf(stdin, NULL);
    }

    char busca[20], escolha[20];
    int vezes = 0, vezesFUSCA = 0;//vezes que o carro aparece na lista

    do{
        printf("Digite o carro que quer buscar(escreva em maiusculo): ");
        fgets(busca, 20, stdin);
        busca[strcspn(busca, "\n")]='\0';
        setbuf(stdin, NULL);

        for (int i = 0; i < 10; i++){
            if(strcmp(carro[i],busca) == 0){
                vezes++;
                if(vezes != 0){
                printf("O carro está na lista %d vezes.\n", vezes);
                }
            }
        }
        if(vezes == 0){printf("O carro não está na lista.\n");}


        printf("Deseja continuar na busca?(Se sim ecreva FUSCA)");
        fgets(escolha, 20, stdin);
        escolha[strcspn(escolha, "\n")]='\0';
        setbuf(stdin, NULL);

        for (int i = 0; i < 10; i++){
            if(strcspn(carro[i], escolha) == 0){
                vezesFUSCA++;
                if(vezesFUSCA != 0){
                printf("O carro está na lista %d vezes.\n", vezes);
                }
            }
        }
        if(vezesFUSCA == 0){printf("O carro não está na lista.\n");}


    }while (escolha != "FUSCA");
   
   
    return 0;
}