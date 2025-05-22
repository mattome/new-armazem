/*2) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os dados de cinco atletas e 
os exiba por ordem de idade, do mais velho para o mais novo.
Dica: Procure pelo algoritmo BubbleSort no Google*/

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

    for (int h = 0; h < 5 - 1; h++){
        for (int i = 0; i < 5 - h - 1; i++){
            if (atleta[i].idade < atleta[i+1].idade){
                Atleta troca = atleta[i];
                atleta[i] = atleta[i + 1];
                atleta[i+1] = troca;
            }
        }
    }
    
    printf("O atleta mais velho é %s, e enseguida vem o %s, %s, %s e o mais novo é o %s\n", atleta[0].nome, atleta[1].nome, atleta[2].nome, atleta[3].nome, atleta[4].nome);

    return 0;
}