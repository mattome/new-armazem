/*Faça um programa que armazene o nome e salário de 5 empregados. 
Em seguida calcule um aumento de 8% nos salários e exiba a nova folha de pagamentos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nomes[5][20];
    float salario[5];
    float aumento[5];
    int i;

    for ( i = 0; i < 5; i++){
        setbuf(stdin,NULL);
        printf("Digite o nome %i: ", i + 1);
        fgets(nomes[i], 20, stdin);
        nomes[i][strcspn(nomes[i],"\n")]='\0';
        setbuf(stdin,NULL);

        printf("Digite o salário da pessoa %i: ", i + 1);
        scanf("%f", &salario[i]);
        
    }
    
    for ( i = 0; i < 5; i++){
        aumento[i] = salario[i]*1.08;
        printf("A pessoa %i se chama %s e seu salário era R$%.2f e com o aumento de 8 porcento é R$%.2f.\n", i + 1, nomes[i], salario[i], aumento[i]);
    }
    

    return 0;
}