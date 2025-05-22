#include <stdio.h>
#include <ctype.h>
#include <string.h>

void primeiraMaiuscula(char *str) {
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }
}

int main() {
    char nome[30];
    
    printf("Digite o nome da banda: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // remover o \n do final

    primeiraMaiuscula(nome);

    printf("Nome com a primeira letra maiúscula: %s\n", nome);

    return 0;
}