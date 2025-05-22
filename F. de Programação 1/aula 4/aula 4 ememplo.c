#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 15;
    int b = 8;

    float resultadoReal;

    int resultado = a + b;
    printf("A soma é %d\n", resultado);
    
    resultado = a - b;
    printf("A subtracao eh %d\n", resultado);

    resultado = a * b;
    printf("A multiplicacao eh %d\n", resultado);

    resultado = a / b;
    printf("A divisao eh %d\n", resultado);

    resultado = a % b;
    printf("O resultado eh %d\n", resultado);

    resultadoReal = (float)a / b;
    printf("A divisao real eh %.2f\n", resultadoReal);




    return 0;
}