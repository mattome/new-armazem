/*Faça um programa que receba e armazene uma matriz de números inteiros de tamanho 4x3, em seguida o programa deverá exibir:
   a) A soma de todos os elementos pares positivos da matriz;
   b) A média de todos os elementos da matriz;
   c) A quantidade de todos os elementos impares da matriz;
   d) A soma dos elementos da segunda linha da matriz;
   e) O maior elemento da terceira coluna da matriz;*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int matriz[4][3];
    int somaPar = 0, impar = 0, soma2l = 0, maiorElemento = 0;
    float media = 0;

    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 3; c++){
            printf("Valor matriz[%i][%i]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }


    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 3; c++){
            if(matriz[l][c] % 2 == 0 && matriz[l][c] > 0){
                somaPar = somaPar + matriz[l][c];
            }
            
            media = media + matriz[l][c];

            if (matriz[l][c] % 2 != 0){impar++;}

            if(l == 1){
                soma2l = soma2l + matriz[l][c];
            }

            if(c == 2){
                if(maiorElemento < matriz[l][c]){
                    maiorElemento = matriz[l][c];
                }
            }            
        }
    }
    media = media/12;

    for (int l = 0; l < 4; l++){
        for (int c = 0; c < 3; c++){
            printf("%4i", matriz[l][c]);
        }//for
        printf("\n");
        }//for



    //a) A soma de todos os elementos pares positivos da matriz;
    printf("A soma dos elementos pares e positivos da matriz é %d.\n", somaPar);

    //b) A média de todos os elementos da matriz;
    printf("A média de todos os elementos da matriz é %.2f.\n", media);

    //c) A quantidade de todos os elementos impares da matriz;
    printf("A matriz possui %d elementos impares.\n", impar);

    //d) A soma dos elementos da segunda linha da matriz;
    printf("A soma dos elementos da segunda linha da matriz é %d.\n", soma2l);

    //e) O maior elemento da terceira coluna da matriz;
    printf("O maior elemento da terceira coluna é %d.\n", maiorElemento);


    return 0;
}