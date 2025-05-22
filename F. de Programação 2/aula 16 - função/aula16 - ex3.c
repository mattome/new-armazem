/*Implemente uma função em C que receba, via parâmetro, três notas de um aluno (valores reais) e 
um caractere indicando o tipo de cálculo a ser realizado:

'A' → Média aritmética das três notas.
'P' → Média ponderada, considerando os pesos: 5 para a primeira nota, 3 para a segunda e 2 para a terceira.
'S' → Soma das três notas.
A função deve retornar o valor calculado. Na função main, solicite ao usuário as três notas e a letra correspondente 
à operação desejada, chame a função e exiba o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h> // adicione essa linha no início

float Nota(float parametro[3], char caracter){
    float media = 0;
    
    switch (caracter){
    case 'A':
        media = (parametro[0] + parametro[1] + parametro[2])/3;
        printf("A média aritmética é %.2f", media);
        break;
    
    case 'P':
        media = ((parametro[0] * 5) + (parametro[1] * 3) + (parametro[2] * 2))/(5 + 3 + 2);
        printf("A média ponderada é %.2f", media);
        break;
    
    case 'S': 
        media = parametro[0] + parametro[1] + parametro[2];
        printf("A Soma das três notas é %.2f", media);
    
    default:
        break;
    }
    return 0;
}

int main() {
    float notas[3];
    char letra;

    for (int i = 0; i < 3; i++){
        printf("Qual a %dº nota:", i + 1);
        scanf("%f", &notas[i]);
    }
    
    printf("Opções:\n");
    printf("'A' -> Média aritmética das três notas.\n");
    printf("'P' -> Média ponderada, considerando os pesos: 5 para a primeira nota, 3 para a segunda e 2 para a terceira.\n");
    printf("'S' -> Soma das três notas.\n");
    printf("Qual a letra desejada: ");
    scanf(" %c", &letra);
    letra = toupper(letra); // converte para maiúscula

    Nota(notas, letra);

    return 0;
}