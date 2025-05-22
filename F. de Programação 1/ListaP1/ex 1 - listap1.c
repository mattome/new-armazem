/*
1) Sabendo-se que 200 quilowatts de energia custa um quarto do salário mínimo,
 faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e mostre:
a) O valor em reais de cada quilowatt;
b) O valor em reais a ser pago pelos quilowatts gasto;
c) O novo valor a ser pago por essa residência com um desconto de 12%;
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario_minimo, quilowatts_gastos, desconto, valor_a_ser_pago;
    salario_minimo = 1412;
    float quilowatts = (salario_minimo*0.25)/200;  //Valor do quilowatts 
    

    printf("O valor em reais de cada quilowatts é R$%.2f\n", quilowatts); //a)

    printf("Quantos quilowatts você gasto em sua residência:");
    scanf("%f", &quilowatts_gastos);

    valor_a_ser_pago = quilowatts_gastos*quilowatts;
    printf("Você tem que paga R$%.2f\n", valor_a_ser_pago); //b)

    desconto = valor_a_ser_pago *0.12;
    printf("Você recebeu um desconto de R$%.2f\n", desconto);

    printf("O valor que você vai ter que paga com desconto é R$%.2f\n",valor_a_ser_pago - desconto); //c)

    return 0;
}