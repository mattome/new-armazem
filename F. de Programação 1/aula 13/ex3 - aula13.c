/*Desenvolva um programa que armazene o nome e o telefone de 5 pessoas. Ao digitar a posição desejada, 
o programa deve exibir o nome e telefone daquela posição. O programa finaliza ao receber a entrada -1.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[5][20];
    int telefone[5];
    int i, posicao, entrada = 0;

    for ( i = 0; i < 5; i++){
        setbuf(stdin,NULL);
        printf("Digite o nome %d: ", i + 1);
        fgets(nome[i], 20, stdin);
        nome[i][strcspn(nome[i],"\n")]='\0';
        setbuf(stdin,NULL);

        
        setbuf(stdin,NULL);
        printf("Digite o telefone da pessoa %d (ex:00000-0000): ", i + 1);
        scanf("%i", &telefone[i]);
        setbuf(stdin,NULL);

    }


    do{

        printf("Qual pessoa você quer saber os dados?(Digite o número da pessoa de 1 a 5)");
        scanf("%d", &posicao);

        switch (posicao){
        case 1:
            printf("O nome da pessoa 1 é %s e seu telefone é  %d. \n", nome[0], telefone[0]);
            break;
        
        case 2:
            printf("O nome da pessoa 2 é %s e seu telefone é %d. \n", nome[1], telefone[1]);
            break;

        case 3:
            printf("O nome da pessoa 3 é %s e seu telefone é %d. \n", nome[2], telefone[2]);
            break;

        case 4:
            printf("O nome da pessoa 4 é %s e seu telefone é %d. \n", nome[3], telefone[3]);
            break;

        case 5:
            printf("O nome da pessoa 5 é %s e seu telefone é %d. \n", nome[4], telefone[4]);
            break;
        
        default:
            break;
        }
        printf("Deseja consultar outra pessoa? Digite 1 para continuar ou -1 para sair:");
        scanf("%d", &entrada);
    } while (entrada != -1);
    

    return 0;
}