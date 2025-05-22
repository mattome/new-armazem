/*Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes passos:
a) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda, 
que tipo de música ela toca, o número de integrantes e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas;
b) Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher,
 exiba todas as informações das bandas/estruturas.
c) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir informações da
 banda cuja posição no seu ranking é a que foi solicitada pelo usuário;
d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas com esse tipo de música no seu ranking.
e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não;
f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e todas as opções das questões passadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char nomeBanda[30];
    char tipoMusica[20];
    int integrantes;
    int raking;
}Bandas;

void primeiraMaiuscula(char *str) {
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }
}

void preencherBanda(Bandas *banda[]){
    strcpy(banda[0]->nomeBanda, "Green Day");
    strcpy(banda[0]->tipoMusica, "Rock");
    banda[0]->integrantes = 3;
    banda[0]->raking = 1;

    strcpy(banda[1]->nomeBanda, "Metallica");
    strcpy(banda[1]->tipoMusica, "Metal");
    banda[1]->integrantes = 4;
    banda[1]->raking = 4;

    strcpy(banda[2]->nomeBanda, "Legião urbana");
    strcpy(banda[2]->tipoMusica, "Rock");
    banda[2]->integrantes = 5;
    banda[2]->raking = 5;

    strcpy(banda[3]->nomeBanda, "Jovem dionisio");
    strcpy(banda[3]->tipoMusica, "Pop");
    banda[3]->integrantes = 5;
    banda[3]->raking = 3;

    strcpy(banda[4]->nomeBanda, "Good kid");
    strcpy(banda[4]->tipoMusica, "Rock");
    banda[4]->integrantes = 3;
    banda[4]->raking = 2;
    
    printf("\n%s|%-20s|%-20s|%-12s|%-7s\n", "banda", "nome da banda", "tipo de música", "integrantes", "ranking");

    for (int i = 0; i < 5; i++){
        printf("%-5d|%-20s|%-20s|%-12d|%-7d\n", i + 1, banda[i]->nomeBanda, banda[i]->tipoMusica, banda[i]->integrantes, banda[i]->raking);
    }
    return;
}

void rank(Bandas* banda[]){
    int r =0;
    printf("Digite um número de 1 a 5: ");
    scanf("%d", &r);

    for (size_t i = 0; i < 5; i++){
        if(r == banda[i]->raking){
            printf("\n%s|%-20s|%-20s|%-12s|%-7s\n", "banda", "nome da banda", "tipo de música", "integrantes", "ranking");
            printf("%-5d|%-20s|%-20s|%-12d|%-7d\n", i + 1, banda[i]->nomeBanda, banda[i]->tipoMusica, banda[i]->integrantes, banda[i]->raking);
        }
    }
}

void tMusica(Bandas* banda[]){
    char t[20];
    printf("Qual é o tipo de musica que procura? ");
    setbuf(stdin,NULL);
    fgets(t,20,stdin);
    t[strcspn(t,"\n")]='\0';

    primeiraMaiuscula(t);

    for (int i = 0; i < 5; i++){
        int contador = 0;
        
        if (strcmp(t, banda[i]->tipoMusica) == 0) {
            printf("%s\n", banda[i]->nomeBanda);
            contador++;
        }
         else if (i == 4 && contador == 0){
            printf("Não tem esse tipo de musica.\n");
        } 
    }
}

//e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não;
void nBanda(Bandas* banda[]){
    int conta = 0;
    char n[30];

    printf("Digite o nome de uma banda para ver se ela esta entre as bandas favoritas: ");
    setbuf(stdin,NULL);
    fgets(n,30,stdin);
    n[strcspn(n,"\n")]='\0';

    primeiraMaiuscula(n);

    for (int i = 0; i < 5; i++){
        if (strcmp(n, banda[i]->nomeBanda) == 0) {
            printf("A banda esta entre as favoritas.\n");
            conta++;
        } else if (i == 4 && conta == 0){
            printf("A banda não esta entre as favoritas.\n");
        }
    }
    
}

int main() {
    Bandas minhasBandas[5];
    Bandas *ponteiros[5];          // array de ponteiros para essas structs

    // Fazendo os ponteiros apontarem para as structs
    for (int i = 0; i < 5; i++) {
        ponteiros[i] = &minhasBandas[i];
    }

    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Preencher bandas\n");
        printf("2. Mostrar banda por ranking\n");
        printf("3. Buscar por tipo de música\n");
        printf("4. Verificar se banda está entre favoritas\n");
        printf("5. Listar todas as bandas\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                preencherBanda(ponteiros);
                break;
            case 2:
                rank(ponteiros);
                break;
            case 3:
                tMusica(ponteiros);
                break;
            case 4:
                nBanda(ponteiros);
                break;
            case 5:
                printf("\n%s|%-20s|%-20s|%-12s|%-7s\n", "banda", "nome da banda", "tipo de música", "integrantes", "ranking");
                for (int i = 0; i < 5; i++) {
                    printf("%-5d|%-20s|%-20s|%-12d|%-7d\n", i + 1, ponteiros[i]->nomeBanda, ponteiros[i]->tipoMusica, ponteiros[i]->integrantes, ponteiros[i]->raking);
                }
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while(opcao != 0);

    return 0;
}