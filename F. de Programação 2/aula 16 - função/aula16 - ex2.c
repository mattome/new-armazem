/*Implemente uma função em C que receba como parâmetros o sexo ('M' para masculino e 'F' para feminino) 
e a altura (número real) de uma pessoa. A função deve calcular e retornar o peso ideal usando as seguintes fórmulas:

Homens: (72.7 * altura) - 58
Mulheres: (62.1 * altura) - 44.7
Na função main, chame essa função com diferentes valores de teste e exiba o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float pesoIdeal(char sexo, float altura){
    float peso;

    if(sexo == 'M'){
        peso = (72.7 * altura) - 58;
    } else if(sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
    }else {
        peso = 0.0; // valor padrão caso o sexo seja inválido
    }
    return peso;
}

int main() {
    float resultado1 = pesoIdeal('M', 1.65);
    printf("O peso ideal de um homem com 1.65 é %.2f\n", resultado1);

    float resultado2 = pesoIdeal('F', 1.99);
    printf("O peso ideal de uma mulher com 1.99 é %.2f\n", resultado2);
    
    float resultado3 = pesoIdeal('M', 1.87);
    printf("O peso ideal de um homem com 1.87 é %.2f\n", resultado3);
    
    return 0;
}