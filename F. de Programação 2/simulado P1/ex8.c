/*Elabore uma função que receba por parâmetros os coeficientes de uma equação do segundo grau.
 Em seguida, calcule e mostre as raízes dessa equação. Lembre-se de que as raízes são calculadas como

X=(-b+√△)/(2*a)

em que ∆ = b² – 4 * a * c e ax² +bx + c= 0 representa uma equação do segundo grau. A variável a tem de ser diferente de zero.
 Caso seja igual, imprima a mensagem “Não é equação de segundo grau” e retorne o valor −1. Do contrário, retorne o número de 
 raízes e as raízes (por referência) se elas existirem:

    • Se ∆ < 0, não existe real. Número de raízes: 0.
    • Se ∆ = 0, existe uma raiz real. Número de raízes: 1.
    • Se ∆ > 0, existem duas raízes reais. Número de raízes: 2*/

#include <stdio.h>
#include <math.h>

int formulaBaskara(int a, int b, int c, double *x1, double *x2) {
    if (a == 0) {
        printf("Não é equação de segundo grau\n");
        return -1;
    }

    int delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Não existem raízes reais\n");
        return 0;
    } else if (delta == 0) {
        *x1 = -b / (2.0 * a);
        return 1;
    } else {
        *x1 = (-b + sqrt(delta)) / (2.0 * a);
        *x2 = (-b - sqrt(delta)) / (2.0 * a);
        return 2;
    }
}

int main() {
    int a, b, c;
    double x1 = 0, x2 = 0;

    printf("Digite os valores de a, b e c:\n");
    scanf("%d %d %d", &a, &b, &c);

    int num_raizes = formulaBaskara(a, b, c, &x1, &x2);

    if (num_raizes == 1) {
        printf("Raiz única: %.2f\n", x1);
    } else if (num_raizes == 2) {
        printf("Raízes reais: %.2f e %.2f\n", x1, x2);
    }

    printf("Número de raízes: %d\n", num_raizes);
    return 0;
}
