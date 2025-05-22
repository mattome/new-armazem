#include <stdio.h>
#include <stdlib.h>

int main() {

    int contador = 50;

    printf("Contador: %d\n",contador);

    contador++; // mesma coisa que contador = contador + 1;
    contador+=5; //adiciona 5
    contador--; //retira um valor

    printf("Contador: %d\n",contador);
    
    return 0 ;
}