/*Altere o exercício anterior para receber os 3 valores no mesmo scanf.
Exemplo:
Digite a conta a ser realizada: 5+8
O resultado é: 13

Texto de resposta Questão 3*/

#include <stdio.h>
#include <stdlib.h>

int main() {
 char opcao;
 int num1, num2, resultado;

    printf("Menu de programa: \n");
    printf("+ – Para somar\n");
    printf("- – Para subtrair\n");
    printf("* - Para multiplicar\n");
    printf("/ - Para dividir\n");

    printf("Digite a opção escolhida: ");
    scanf("%c", &opcao);

    switch (opcao)
    {
    case '+':
        printf("Digite a conta a ser realizada: ");
        scanf("%i %c %i", &num1, &opcao, &num2);
        resultado = num1 + num2;
        printf("O resultado é: %i", resultado);

        break;
    case '-':
        printf("Digite a conta a ser realizada: ");
        scanf("%i %c %i", &num1, &opcao, &num2);
        resultado = num1 - num2;
        printf("O resultado é: %i", resultado);

        break;
        case '*':
        printf("Digite a conta a ser realizada: ");
         scanf("%i %c %i", &num1, &opcao, &num2);
         resultado = num1 * num2;
        printf("O resultado é: %i", resultado);

        break;
        case '/':
        printf("Digite a conta a ser realizada: ");
         scanf("%i %c %i", &num1, &opcao, &num2);
         resultado = num1 / num2;
        printf("O resultado é: %i", resultado);

        break;
    default:
        printf("Nenhuma opção foi selecionada");
        break;
    }

   return 0;
}