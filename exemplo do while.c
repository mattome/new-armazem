
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int valor;

    do{
        printf("Digite um valor positivo:");
        scanf("%i", &valor);
    }while (valor <= 0);//enquanto o valor for negativo ele sempre vai voltar para o do

    return 0;
}