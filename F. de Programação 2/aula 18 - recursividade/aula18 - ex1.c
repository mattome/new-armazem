/*Crie uma função que retorne x*y através de operação de soma. A função recebe x e y por parâmetro*/
#include <stdio.h>
#include <stdlib.h>

int mult(int valor1, int valor2){
    if (valor1 == 1){
        return valor2;
    } 
    return valor2 + mult(valor1 - 1, valor2);
}

int main(){
    int x = 5;
    int y = 3;
    int z;
    z = mult(x, y);

    printf("%d\n", z);
    return 0;
}