//Crie um algoritmo que exiba todos os números pares entre 240 e 730 inclusive.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num;

    for(num = 240; num <= 730; num++){
        if(num % 2 == 0){
            printf("%d\n",num);
        }
    }

    return 0;
}