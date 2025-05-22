/* Faça um programa que receba o nome e o preço de custo de 3 produtos. Para isso, crie, além da matriz com os nomes (tamanho 20),
 uma matriz 3x3 de preços de produtos onde cada coluna representa: coluna 0 é o preço de custo (digitado pelo usuário), 
 coluna 1 será o preço à vista calculado (preço de custo acrescido em 10%), coluna 2 é o preço a prazo calculado 
 (preço de custo acrescido em 20%).  Para tanto, relacione o índice/linha da matriz de preços com o índice/linha de um vetor 
 bidimensional de strings que armazenará o nome dos produtos.
O programa deve exibir, um por um, o nome do produto e a sua tabela com todos os preços (custo, à vista e a prazo).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char produto[3][20];
    int preco[3][3];
    int i, l, c;

    for(i = 0; i < 3; i++){
        printf("Digite o nome do produto %d: ", i+1);
        fgets(produto[i], 20, stdin);
        produto[i][strcspn(produto[i], "\n")]='\0';
        setbuf(stdin, NULL);   
    }

//coluna 0 é o preço de custo (digitado pelo usuário)
    for ( l = 0; l < 3; l++){
        printf("Digite o preço de custo do produto %d: ", l+1);
        scanf("%d", &preco[l][0]);
    }

//coluna 1 será o preço à vista calculado (preço de custo acrescido em 10%)
//coluna 2 é o preço a prazo calculado (preço de custo acrescido em 20%)
    for ( l = 0; l < 3; l++){
        preco[l][1] = preco[l][0]*1.1;
        preco[l][2] = preco[l][0]*1.2;
    }

/*Para tanto, relacione o índice/linha da matriz de preços com o índice/linha de um vetor 
 bidimensional de strings que armazenará o nome dos produtos.
O programa deve exibir, um por um, o nome do produto e a sua tabela com todos os preços (custo, à vista e a prazo).*/

    
    
    
    printf("\nTabela de Preços dos Produtos:\n");
    for (i = 0; i < 3; i++) {
        printf("\nProduto: %s\n", produto[i]);
        printf("Preço de Custo: R$ %.2f\n", preco[i][0]);
        printf("Preço à Vista (10%% acrescido): R$ %.2f\n", preco[i][1]);
        printf("Preço a Prazo (20%% acrescido): R$ %.2f\n", preco[i][2]);
    }
    
    


    return 0;
}