/*Faça uma função recursiva que retorne o n-ésimo termo da sequência de Fibonacci, sendo que n é recebido por parâmetro. 
Utilize essa função para desenvolver um programa que mostre no main() os n termos dessa sequência na tela, 
a partir do valor de n recebido pelo teclado. Sabe-se que o 1º termo é 0 e o 2º termo é 1.*/

#include <stdio.h>
#include <stdlib.h>

int febonacci(int valor){
    if(valor == 1){
        return 0;
    } else if (valor == 2){
        return 1;
    }
    return febonacci(valor - 1) + febonacci(valor - 2);
    
}

int main(){
    int n;

    printf("Qual o valor de n?");
    scanf("%d", &n);
    
    int resulta;


    for (int i = n; i > 0; i--){
        resulta = febonacci(i); 
        printf("Termo %d, febonacci %d\n", i, resulta);   
    }
    
    return 0;
}