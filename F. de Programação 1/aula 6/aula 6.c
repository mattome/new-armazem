#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 12){
        printf("Você é uma criança\n");
    }else{ 
        if(idade < 18){
            printf("Você é um adolescente\n");
        }else{
        printf("Você é um adulto\n");
        }
    }


    return 0;
}