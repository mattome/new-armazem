/*Desenvolva  um  programa  que  armazene  o  nome  e  o 
telefone  de  5  pessoas.  Ao  digitar  a  posição  desejada,  o 
programa deve exibir o nome e telefone daquela posição. O 
programa finaliza ao receber a entrada -1.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int main(){
        char nome[5][20];
        int telefone[5], posicao;
        int l;

        for(l = 0; l < 5; l++){
            printf("Digite o nome da [%d] pessoa: ", l);
            scanf("%20[^\n]", nome[l]);
            printf("Digite o numero de telefone dessa pessoa: ");
            scanf("%d", &telefone[l]);
            setbuf(stdin, NULL);
        }

        printf("Digite a posição desejada: ");
        scanf("%d", &posicao);

        for(l = 0; l < 5; l++){
            if(posicao == l){
                printf("%s. %d\n", nome[l], telefone[l]);
            }
        }
    return 0;

    }