/*4) Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o resultado da seguinte série S:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float serie(int n){
    float s = 0;
    for (int i = 1; i <= n; i++){
        s += (pow(i, 2) + 1)/(i + 3);
    }
    
    return s;
}

int main() {
    float resultadoS = serie(5);
    printf("O valor de s é %.2f\n", resultadoS);

   
    return 0;
}