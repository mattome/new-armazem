/*Crie uma função que retorne o fatorial de um número passado por parâmetro.

fatorial(n):

=1 se n=0

= n x fatorial (n-1) se n>0*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int valor1){
    if(valor1 == 0){
        return 1;
    }else if (valor1 == 1){
        return valor1;
    } else if(valor1 >0){
        return valor1 * fatorial(valor1 - 1);
    } else {
        printf("N é negativo\n");
        return valor1;
    }
}

int main(){
    int n = -5;
    
    int z = 0;
    z = fatorial(n);

    printf("%d\n", z);
    return 0;
}