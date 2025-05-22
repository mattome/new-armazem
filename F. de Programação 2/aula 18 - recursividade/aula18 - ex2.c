/*Crie uma função que retorne x elevado a y através de operação de multiplicação. A função recebe x e y por parâmetro*/

#include <stdio.h>
#include <stdlib.h>

int eleva(int valor1, int valor2){
    if (valor1 == 1){
        return valor2;
    } 
    return valor2 * eleva(valor1 - 1, valor2);
}

int main(){
    int x = 5;
    int y = 3;
    int z;
    z = eleva(y, x);

    printf("%d\n", z);
    return 0;
}