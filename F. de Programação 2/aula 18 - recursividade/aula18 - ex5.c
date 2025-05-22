/*Um problema típico em ciência da computação consiste em converter um número da sua forma decimal para binária.
 Crie um algoritmo recursivo para resolver esse problema.

●Solução trivial: x=0 quando o número inteiro já foi convertido para binário

●Passo da recursão: saber como x/2 é convertido. Depois, imprimir um dígito (0 ou 1) dado o sucesso da divisão.*/

//000
//001
//010
//011
//100
//101


#include <stdio.h>
#include <stdlib.h>

int binario(int valor){
    
    if(valor == 0){
        return 0;
    } else {
        binario(valor / 2);  // Passo recursivo
        printf("%d", valor % 2);        // Imprime o dígito binário
    }
    return 0;
}

int main(){
    int x = 5;//101

    binario(x);

    printf("\n");
    return 0;
}