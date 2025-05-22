/*Faça um programa que receba duas matrizes de números inteiros A e B, ambas 2x3. 
Em seguida calcule uma matriz C segundo a fórmula C = (A + B) * 2. Mostre a matriz C resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int matrizA[2][3], matrizB[2][3], matrizC[2][3];
    int l, c;

    //matrizA
    for ( l = 0; l < 2; l++){
        for ( c = 0; c < 3; c++){
            printf("Valor matrizA[%d][%d]: ", l, c);
            scanf("%d", &matrizA[l][c]);
        }    
    }
    printf("matrizA:\n");
    for ( l = 0; l < 2; l++){
        for ( c = 0; c < 3; c++){
            printf("%4d", matrizA[l][c]);
        }  
        printf("\n");  
    }


    //matrizB
    for ( l = 0; l < 2; l++){
        for ( c = 0; c < 3; c++){
            printf("Valor matrizB[%d][%d]: ", l, c);
            scanf("%d", &matrizB[l][c]);
        }    
    }
    printf("matrizB:\n");
    for ( l = 0; l < 2; l++){
        for ( c = 0; c < 3; c++){
            printf("%4d", matrizB[l][c]);
        } 
        printf("\n");     
    }


    //matizC    C = (A + B) * 2
    for ( l = 0; l < 2; l++){
        for ( c = 0; c < 3; c++){
            matrizC[l][c] = matrizA[l][c] + matrizB[l][c];
            matrizC[l][c] = matrizC[l][c] * 2;
        }    
    }
    printf("matrizC:\n");
    for ( l = 0; l < 2; l++){
        for ( c = 0; c < 3; c++){
            printf("%4d", matrizC[l][c]);
        } 
        printf("\n");     
    }
    

    return 0;
}