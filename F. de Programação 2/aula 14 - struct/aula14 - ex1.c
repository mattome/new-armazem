/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct ponto{
    float x;
    float y;
   };//struct

int main() {
    struct ponto p1, p2;

    //PONTO 1
    printf("Digite as coordenadas do primeiro ponto (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("As coordenadas do ponto 1 é (%.2f, %.2f)\n", p1.x, p1.y);

    //PONTO 2
    printf("Digite as coordenadas do segundo ponto (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    printf("As coordenadas do ponto 2 é (%.2f, %.2f)\n", p2.x, p2.y);

    //CÁLCULO DA DISTÂNCIA
    float distanciaPontos;
    //d=√((x_2-x_1)²+(y_2-y_1)²) para calcular a distância entre quaisquer dois pontos.
    distanciaPontos = sqrt(pow(p2.x-p1.x, 2) +pow(p2.y-p1.y, 2));
    printf("A distancia entre os dois pontos é %.2f\n2", distanciaPontos);
    
    return 0;
}