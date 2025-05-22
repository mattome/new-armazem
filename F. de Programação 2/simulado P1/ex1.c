/*1) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. 
Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    char esporte[20];
    int idade;
    float altura;
} Atleta;

int main(){
    Atleta atleta[5] = {
        {"Matheus", "Futebol", 20, 1.79},
        {"Osni", "Basket", 55, 1.81},
        {"Rosi", "Tenis", 51, 1.75},
        {"Rafael", "Volei", 60, 1.80},
        {"Pessoa", "Soccer", 1, 1.50},
    };

    float maisAlto = atleta[0].altura;
    int valorMaisAlto = 0;
    float maisVelho = atleta[0].idade;
    int valorMaisVelho = 0;

    for (int i = 0; i < 5; i++){
        if (maisAlto < atleta[i].altura){
            maisAlto = atleta[i].altura;
            valorMaisAlto = i;
        }
        
        if (maisVelho < atleta[i].idade){
            maisVelho = atleta[i].idade;
            valorMaisVelho = i;
        }
    }
    
    printf("O atleta mais alto é o %s\n", atleta[valorMaisAlto].nome);
    printf("O atleta mais velho é o %s\n", atleta[valorMaisVelho].nome);

    return 0;
}