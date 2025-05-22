/*Escreva uma função que receba como parâmetro um valor L e um valor C e retorne o ponteiro para uma matriz 
alocada dinamicamente contendo L linhas e C colunas. Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

// Função que cria uma matriz LxC preenchida com zeros
int** criarMatriz(int L, int C) {
    if (L <= 0 || C <= 0) {
        return NULL;
    }

    // Aloca um vetor de ponteiros (linhas)
    int** matriz = (int**)malloc(L * sizeof(int*));
    if (matriz == NULL) {
        return NULL;
    }

    // Para cada linha, aloca um vetor de inteiros (colunas)
    for (int i = 0; i < L; i++) {
        matriz[i] = (int*)malloc(C * sizeof(int));
        if (matriz[i] == NULL) {
            // Libera memória já alocada em caso de erro
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return NULL;
        }

        // Inicializa a linha com zeros
        for (int j = 0; j < C; j++) {
            matriz[i][j] = 0;
        }
    }

    return matriz;
}


int main() {
    int linhas, colunas;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    int** matriz = criarMatriz(linhas, colunas);

    if (matriz == NULL) {
        printf("Erro na alocação da matriz.\n");
        return 1;
    }

    printf("Matriz %dx%d inicializada com zeros:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberação da memória
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
