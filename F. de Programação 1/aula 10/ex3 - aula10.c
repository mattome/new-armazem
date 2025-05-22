//Crie um algoritmo que exiba todos os números múltiplos de 5 no intervalo de 1 a 500.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    for(int num = 5; num <= 500; num += 5){
        printf("%d\n",num);
    }

    return 0;
}