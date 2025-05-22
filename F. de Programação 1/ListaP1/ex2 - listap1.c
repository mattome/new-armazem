/*
2) Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois pontos no plano,
 através da seguinte fórmula:

d=√((x2−x1)²+(y2−y1)²)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2, d, x, y;

    printf("Qual é a coordenada x? ");
    scanf("%f %f", &x1, &y1);

    printf("Qual é a coordenada y? ");
    scanf("%f %f", &x2, &y2);

    x = pow((x2 - x1), 2);
    y = pow ((y2 - y1), 2);

    d = sqrt(x + y);
    printf("As distancia dos dois pontos é %f\n",d);
 
    return 0;
}