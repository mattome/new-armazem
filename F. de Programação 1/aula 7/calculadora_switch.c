/*Crie uma calculadora usando a instrução switch, que pergunte qual das operações básicas quer fazer (+, -, * e /), 
em seguida peça os dois números e mostre o resultado da operação matemática entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
 char opcao;
 int num1, num2;

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
        printf("Digite o primeiro número: ");
        scanf("%i", &num1);
        printf("Digite o segundo número: ");
        scanf("%i", &num2);
        printf("A soma dos dois número é %i", num1 + num2);

        break;
    case '-':
        printf("Digite o primeiro número: ");
        scanf("%i", &num1);
        printf("Digite o segundo número: ");
        scanf("%i", &num2);
        printf("A subtração dos dois número é %i",num1 - num2);

        break;
        case '*':
        printf("Digite o primeiro número: ");
        scanf("%i", &num1);
        printf("Digite o segundo número: ");
        scanf("%i", &num2);
        printf("A multiplicação dos dois número é %i",num1 * num2);

        break;
        case '/':
        printf("Digite o primeiro número: ");
        scanf("%i", &num1);
        printf("Digite o segundo número: ");
        scanf("%i", &num2);
        printf("A divisão dos dois número é %i",num1 / num2);

        break;
    default:
        printf("Nenhuma opção foi selecionada");
        break;
    }

   return 0;
}