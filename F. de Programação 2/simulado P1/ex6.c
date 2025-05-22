/*6) Escreva uma função para o cálculo do volume e da área de uma esfera em que π = 3.1414592.
 O valor do raio r deve ser passado por parâmetro, e os valores calculados devem ser retornados por referência.*/
 //V = 4/3 PI.r^3
 
 //A = 4 PI.r^2


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void volume(float pi, int raio, float *v){
    *v = (4.0/3.0) * pi * pow(raio,3);
}

void area(float pi, int raio, float *a){
    *a = 4 * pi * pow(raio,2);
}

int main() {
    float pi = 3.1414592;
    int raio = 10;
    
    float v = 0;
    volume(pi, raio, &v);
    printf("O volume da esfera é %.2f\n", v);
    
    float a = 0; 
    area(pi, raio, &a);
    printf("A area da esfera é %.2f\n", a);

    return 0;
}