/*Considere a função X abaixo:

int X(int a){
  if(a <=0) return0;
  else return a + X(a-1);
}//X

O que essa função faz? Escreva uma função não-recursiva que resolve o mesmo problema.*/

#include <stdio.h>
#include <stdlib.h>


int X(int a){
    int b = 0;

    for (int i = a; i > 0; i--){
        b += i;
    }
    return b;
}

int main(){
    int numero = 5;
    int resultado;

    resultado = X(numero);
    printf("%d\n", resultado);

    return 0;
}