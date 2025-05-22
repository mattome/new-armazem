/*Faça um programa que multiplique as matrizes A e D abaixo gerando matriz AD
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int lA, cA, lD, cD, i, j, x, aux;

    printf("Quantas linhas a matriz A tem:");
    scanf("%d", &lA);
    printf("Quantas colunas a matriz A tem:");
    scanf("%d", &cA);
    int matrizA[lA][cA];

    printf("Quantas linhas a matriz B tem:");
    scanf("%d", &lD);
    printf("Quantas colunas a matriz B tem:");
    scanf("%d", &cD);
    int matrizD[lD][cD];

    /*Para ser possível multiplicar matrizes, 
    é primordial que o número de colunas da primeira matriz seja igual ao 
    número de linhas da segunda matriz.*/

    if(cA == lD){
        for (i = 0; i < lA; i++){//matriz A
            for (j = 0; j < cA; j++){
                printf("Digite a matriz A[%i][%i]:", i, j);
                scanf("%d", &matrizA[i][j]);
            }
        }

        for (i = 0; i < lD; i++){//matriz D
            for (j = 0; j < cD; j++){
                printf("Digite a matriz D[%i][%i]:", i, j);
                scanf("%d", &matrizD[i][j]);
            }
        }


        printf("Matriz A:\n");// printa os valores da matriz A
    
        for (i = 0; i < lA; i++){
            for (j=0; j < cA; j++){
                printf("%4i", matrizA[i][j]);
            }//for
            printf("\n");
        }//for


        printf("Matriz D:\n");// printa os valores da matriz D
    
        for (i = 0; i < lD; i++){
            for (j=0; j < cD; j++){
                printf("%4i", matrizD[i][j]);
            }//for
            printf("\n");
        }//for


        int matrizAD[lA][cD];//Cálculo matrizAD

        for (i = 0; i < lA; i++) {
            for (j = 0; j < cD; j++) {
                aux = 0; // Inicialize `aux` aqui
                for (x = 0; x < lD; x++) {
                    aux += matrizA[i][x] * matrizD[x][j];
                }
                matrizAD[i][j] = aux;
            }
}


        printf("Matriz AD:\n");//Printe da matriz AD
        
        for (i = 0; i < lA; i++){
            for(j = 0; j < cD; j++){
                printf("%4i",matrizAD[i][j]);
            }
            printf("\n");
        }
        

    }//if 
    else{
        printf("Números de colunas da  matriz A não é igual a o número de linhas da matriz B.\n");
    }


    return 0;
}