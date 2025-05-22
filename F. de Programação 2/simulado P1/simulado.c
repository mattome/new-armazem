/*Você foi contratado pela Riot Games para desenvolver partes do sistema de ranking do League of Legends. Para isso, realize as 
seguintes etapas:

a) Defina um tipo enumerado (enum) para representar os níveis (tiers) dos jogadores. Os tiers são:
1 - Bronze, 2 - Prata, 3 - Ouro, 4 - Platina, 5 - Diamante, 6 - Desafiante.

Em seguida, declare uma estrutura para armazenar os dados de um jogador no ranking. Cada jogador deve possuir:

nome (string),

número de vitórias (inteiro),

número de derrotas (inteiro),

tier (enum definido),

pontos (inteiro).

b) Crie uma função que receba do teclado os dados de 6 jogadores e os armazene em um vetor.
Não devem ser aceitos valores negativos para vitórias, derrotas ou pontos. Solicite novos valores caso sejam inválidos.

c) Crie uma função que exiba uma tabela alinhada com o nome e a taxa de vitórias (winrate) de cada jogador.
A fórmula para calcular o winrate é:
    winrate=(vitórias/(vitórias+derrotas))∗100
Essa taxa deve ser calculada por uma função adicional, que recebe o número de vitórias e derrotas (por valor) e retorna o winrate.
Essa função deve ser chamada uma vez para cada jogador.

d) Crie uma função que receba um número de 1 a 6 (correspondente a um Tier) e retorne a estrutura do jogador líder daquele tier 
(ou seja, o jogador com mais pontos naquele nível).
Solicite o tier desejado ao usuário via teclado e exiba os dados do líder retornado.

e) Implemente uma função que busque um jogador pelo nome digitado.
Essa função deve receber o nome do jogador e retornar, por referência, os seguintes dados: número de vitórias, número de derrotas, 
tier e pontos.
A exibição dos dados deve ser feita na função main, utilizando os valores retornados pela função de busca.

f) Crie uma função recursiva que calcule a soma total de partidas disputadas por todos os jogadores (ou seja, a soma de todas as
 vitórias e derrotas).
Essa função deve ser chamada na função main, e o valor retornado deve ser exibido.

Observações:

Cada item de b a f deve ser implementado em uma função separada.

Não é permitido o uso de variáveis globais.

Caso necessário, utilize parâmetros adicionais nas funções.

Texto de resposta Questão 1*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {BRONZE = 1, PRATA, OURO, PLATINA, DIAMANTE, DESAFIANTE}Tier;

const char *rankJogador[] = {"Bronze", "Prata", "Ouro", "Platina", "Diamante", "Desafiante"};

typedef struct {
    char nome[20];
    int numeroVitorias;
    int numeroDerrotas;
    Tier tier;
    int pontos;
}Jogador;

void limpaBuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void leString(char texto[], int tamanho){
    fgets(texto, tamanho, stdin);
    texto[strcspn(texto,"\n")] = '\0';
    limpaBuffer();
}

void preencher(Jogador j[]){
    for (int i = 0; i < 6; i++){
        printf("Digite o nome do %d° jogador: ", i + 1);
        leString(j[i].nome, 20);

        int vitorias;
        do{
            printf("Quantas vitorias o %d° jogador tem: ", i + 1);
            scanf("%d", &j[i].numeroVitorias);
            vitorias = 0;
            vitorias += j[i].numeroVitorias;
        } while (vitorias <= 0);
        
        int derrotas;
        do{
            printf("Quantas derrotas o %d° jogador tem: ", i + 1);
            scanf("%d", &j[i].numeroDerrotas);
            derrotas = 0;
            derrotas += j[i].numeroDerrotas;
        } while (derrotas <= 0);

        int rank;
        do{
            printf("Qual o rank do %d° jogador (digite 1 para Bronze, 2 para Prata, 3 para Ouro, 4 para Platina, 5 para Diamante, 6 para Desafiante): ", i + 1);
            scanf("%d", &j[i].tier);
            rank = 0;
            rank += j[i].tier;
        }while(rank <= 0  || rank > 6);

        int pontos;
        do{
            printf("Quantas pontos o %d° jogador tem: ", i + 1);
            scanf("%d", &j[i].pontos);
            pontos = 0;
            pontos += j[i].pontos;
        } while (pontos <= 0);
    }
}


float winrate(int vitorias,int derrotas){
    return ((float)vitorias/(float)(vitorias+derrotas))*100;
}

void exibir(Jogador j[]){
    printf("%-20s | %-10s\n", "Nome jogador", "Winrate");
    printf("------------------------------------------\n");
    for (int i = 0; i < 6; i++){
        printf("%-20s | %-10.2f\n", j[i].nome, winrate(j[i].numeroVitorias, j[i].numeroDerrotas));
        
    }
    
}


void rankMaior(Jogador j[]){
    int numero;
    do{
        printf("Digite um número de 1 a 6: ");
        scanf("%d", &numero);
    }while(numero <= 0 || numero > 6);
    
    int lider = 0;
    for (int i = 0; i < 6; i++){
        if(numero == j[i].tier){
            if(lider < j[i].pontos){
                lider = 0;
                lider += j[i].pontos;
            }
        }
    } if(lider == 0){
        printf("Nenhum dos jogadores é desse rank.\n");
    }

    for (int i = 0; i < 6; i++){
        if (lider == j[i].pontos){
            printf("Nome: %s\n", j[i].nome);
            printf("Vitorias: %d\n", j[i].numeroVitorias);
            printf("Derrotas: %d\n", j[i].numeroDerrotas);
            printf("Pontos: %d\n", j[i].pontos);
            printf("Tier: %s\n", rankJogador[j[i].tier - 1]);
        }
        
    }
    
    
}


void referencia(Jogador j[], int *vitorias, int *derrotas, int *tier, int *pontos){
    char nome[20];
    int encontrado = 0;
    
    do{
        printf("Qual é o nome do jogador: ");
        leString(nome, 20);

        for (int i = 0; i < 6; i++){
            if(strcmp(nome, j[i].nome) == 0){
                *vitorias = j[i].numeroVitorias;
                *derrotas = j[i].numeroDerrotas;
                *tier = j[i].tier;
                *pontos = j[i].pontos;
                encontrado++;
            }
        }
        } while (encontrado == 0);
            
}

/*f) Crie uma função recursiva que calcule a soma total de partidas disputadas por todos os jogadores (ou seja, a soma de todas as
 vitórias e derrotas).
Essa função deve ser chamada na função main, e o valor retornado deve ser exibido.*/

int somaPartida(Jogador j[], int numeroJogadores){
    if(numeroJogadores == 1){
        return j[numeroJogadores].numeroVitorias + j[numeroJogadores].numeroDerrotas;
    }
    return j[numeroJogadores].numeroVitorias +j[numeroJogadores].numeroDerrotas + somaPartida(j, numeroJogadores - 1);
    
}


int main(){
    Jogador jogador[6];

    preencher(jogador);

    exibir(jogador);

    rankMaior(jogador);

    int vitoriasExE, derrotasExE, tierExE, pontosExE;
    
    referencia(jogador, &vitoriasExE, &derrotasExE, &tierExE, &pontosExE);

    printf("Esse jogador tem %d vitorias, %d derrotas, %d pontos e é do rank %s", vitoriasExE, derrotasExE, pontosExE, rankJogador[tierExE - 1]);



    int totalPartidas = somaPartida(jogador, 5);
    printf("TOTAL DE PARTIDAS:%d", totalPartidas);
    
    



    return 0;
}