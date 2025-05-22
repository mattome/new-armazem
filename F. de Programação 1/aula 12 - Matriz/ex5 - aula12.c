/*Faça um programa que some as matrizes A e B, gerando a matriz C*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int lA, cA, lB, cB, i, j;

    printf("Quantas linhas a matriz A tem:");
    scanf("%d", &lA);
    printf("Quantas colunas a matriz A tem:");
    scanf("%d", &cA);
    int matrizA[lA][cA];

    printf("Quantas linhas a matriz B tem:");
    scanf("%d", &lB);
    printf("Quantas colunas a matriz B tem:");
    scanf("%d", &cB);
    int matrizB[lB][cB];

    if(lA == lB && cA == cB){
        for (i = 0; i < lA; i++){//matriz A
            for (j = 0; j < cA; j++){
                printf("Digite a matriz A[%i][%i]:", i, j);
                scanf("%d", &matrizA[i][j]);
            }
        }


        for (i = 0; i < lB; i++){//matriz B
            for (j = 0; j < cB; j++){
                printf("Digite a matriz B[%i][%i]:", i, j);
                scanf("%d", &matrizB[i][j]);
            }
        }

        printf("Matriz A:\n");// printa os valores da matriz A
    
        for (i = 0; i < lA; i++){
            for (j=0; j < cA; j++){
                printf("%4i", matrizA[i][j]);
            }//for
            printf("\n");
        }//for

        printf("Matriz B:\n");// printa os valores da matriz B
    
        for (i = 0; i < lB; i++){
            for (j=0; j < cB; j++){
                printf("%4i", matrizB[i][j]);
            }//for
            printf("\n");
        }//for

        printf("Matriz C:\n");// printa os valores da matriz C

        for (i = 0; i < lA; i++){
            for (j=0; j < cB; j++){
                printf("%4i", matrizA[i][j] + matrizB[i][j]);
            }//for
            printf("\n");
        }//for


    }//if
    else{
        printf("Número de linhas e colunas das duas matrizes não são iguis.\n");
    }
    
    return 0;
}