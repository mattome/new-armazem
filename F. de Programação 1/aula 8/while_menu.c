/*Faça um menu que mostre 3 opções

Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:

A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
A segunda opção imprime “Teste2” e mostra o menu novamente.
A terceira opção finaliza o programa.
Caso digite uma opção diferente, deve mostrar uma mensagem de erro e mostrar o menu novamente.

Texto de resposta Questão 8
*/

#include <stdio.h>

int main(){
    int opcao = 1;

        while(opcao != 3) {
            printf("Menu do programa: \n");
            printf("1 - Teste 1\n");
            printf("2 - Teste 2\n");
            printf("3 – Sair do programa\n");
            printf("Digite sua opção: ");
            scanf("%i", &opcao);
                if(opcao == 1){
                    printf("Teste1\n");
                }else if(opcao == 2){
                    printf("Teste2\n");  
                }else if(opcao == 3){
                    break;  
                }else{
                    printf("Erro\n");
                }
            
    }
        
    return 0;
}