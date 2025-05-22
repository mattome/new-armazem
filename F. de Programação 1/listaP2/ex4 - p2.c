/* Faça um programa que leia e armazene um vetor (VetorA) de inteiros e tamanho 10. Crie um VetorB, de mesmo tamanho, 
gerado a partir do Vetor A invertido (de trás para frente). Em seguida, calcule o VetorC que deverá ser o resultado do VetorA 
multiplicado pelo escalar 3 e em seguida subtraído do Vetor B.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int vetorA[10], vetorB[10], vetorC[10];

    //Vetor A
    for (int i = 0; i < 10; i++){
        printf("Digite o valor %d do vetorA: ", i+1);
        scanf("%d", &vetorA[i]);
    }

    printf("VetorA\n");
    for (int i = 0; i < 10; i++){
        printf("%d  ", vetorA[i]);
    }
    
    //Vetor B
    for (int  i = 0; i < 10; i++){
            vetorB[i] = vetorA[9-i];
        }

    printf("\nVetorB\n");    
    for (int i = 0; i < 10; i++){
        printf("%d  ", vetorB[i]);
    }
    
    //Vetor C
    for (int i = 0; i < 10; i++){
        vetorC[i] = vetorA[i]*3;
        vetorC[i] = vetorC[i] - vetorB[i];
    }
    
    printf("\nVetorC\n");
    for (int i = 0; i < 10; i++){
        printf("%d  ", vetorC[i]);
    }
   
    return 0;
}