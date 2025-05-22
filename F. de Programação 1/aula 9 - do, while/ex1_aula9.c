#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, media, soma_medias = 0;
    int contador = 1;

    while (contador <= 5) {
        printf("Aluno %d\n", contador);

        // Solicita e valida a primeira nota
        do {
            printf("Digite a nota 1: ");
            scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        // Solicita e valida a segunda nota
        do {
            printf("Digite a nota 2: ");
            scanf("%f", &nota2);
            if (nota2 < 0 || nota2 > 10) {
                printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        // Calcula a média para o aluno atual
        media = (nota1 + nota2) / 2;
        printf("Média do aluno %d: %.2f\n\n", contador, media);

        // Acumula a média na soma das médias
        soma_medias += media;

        contador++;
    }

    // Calcula e exibe a média geral dos 5 alunos
    printf("A média geral das notas dos 5 alunos é: %.2f\n", soma_medias / 5);

    return 0;
}