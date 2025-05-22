/*Faça um programa que calcule o imposto de renda a ser pago tendo como entrada o salário de um empregado. 
O imposto deve ser calculado da seguinte maneira:
imposto = salário x alíquota – parcela da dedução*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float imposto, salario, aliquota, parcela_deducao;
    imposto = (salario * aliquota) - parcela_deducao;

    printf("Digite o seu sálario: ");
    scanf("%f", &salario);

    if(salario <= 1903.98){
        printf("Você está isento do imposto");
    }else{ if (salario >= 1903.99 && salario <= 2826.65){
            aliquota = 0.075;
            parcela_deducao = 142.80;
            imposto = (salario * aliquota) - parcela_deducao;
            printf("Você tem que paga %.2f\n",imposto);
    }else{ if(salario >= 2826.66 && salario <= 3751.05){
            aliquota = 0.15;
            parcela_deducao = 354.80;
            imposto = (salario * aliquota) - parcela_deducao;
            printf("Você tem que paga %.2f\n",imposto);
    }else{ if(salario >= 3751.06 && salario <= 4664.68){
            aliquota = 0.225;
            parcela_deducao = 636.13;
            imposto = (salario * aliquota) - parcela_deducao;
            printf("Você tem que paga %.2f\n",imposto);
    }else{ if( salario > 4664.68){
            aliquota = 0.275;
            parcela_deducao = 869.36;
            imposto = (salario * aliquota) - parcela_deducao;
            printf("Você tem que paga %.2f\n",imposto);

    }

    return 0;
}
    }
    }
    }   
    }