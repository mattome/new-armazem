#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/*char maiuscula(char letra){
    letra = toupper(letra); // converte para maiúscula
    return letra;
}*/

int main() {
    char letra;

    printf("Qual a letra desejada: ");
    scanf(" %c", &letra);
    letra = toupper(letra); // converte para maiúscula
    printf("%c", letra);
    return 0;
}