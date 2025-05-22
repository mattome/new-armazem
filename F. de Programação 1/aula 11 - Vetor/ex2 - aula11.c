/*
Crie um algoritmo que receba 10 números e os armazene em um vetor A. 
Em seguida, gere o vetor B onde cada elemento é o quadrado do valor da mesma posição no vetor A
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float vetorA [10];

    for (int i = 0; i < 10; i++){
        printf("%d° vetorA:", i +1);
        scanf("%f",&vetorA[i]);        
    }
    
    float vetorB [10];

    for(int i = 0; i < 10; i++){
        vetorB[i] = pow(vetorA[i],2);
        printf("%d° vetorA ao quadrado: %.f\n",i + 1, vetorB [i]);

    }


    return 0;
}