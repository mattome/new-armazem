/*9) Faça uma função recursiva que calcule o valor da série S descrita a seguir para um valor 
n maior do que zero a ser fornecido como parâmetro para ela:*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float serieS(int valor, int contador){
    if (contador == valor){
        return (1+pow(valor,2))/valor; 
    }
    return (1+pow(contador,2))/contador + serieS(valor, contador + 1);
}

int main() {
    int n = 4;
    int contador = 1;
    
    float resposta = serieS(n, contador);
    printf("O resultado de s é %.2f", resposta);
   
    return 0;
}