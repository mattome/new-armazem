#include <stdio.h>
#include <string.h>

#define NUM_CIDADES 5
#define MAX_NOME 20

int main() {
    char cidades[NUM_CIDADES][MAX_NOME];
    int servidores[NUM_CIDADES][3]; // Colunas: [0] ativos, [1] com problemas, [2] total

    // a) Receber os dados das cidades
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Digite o nome da cidade %d: ", i + 1);
        fgets(cidades[i], MAX_NOME, stdin);
        cidades[i][strcspn(cidades[i], "\n")] = '\0'; // Remove o '\n' do final

        do {
            printf("Quantidade de servidores ativos na cidade %s: ", cidades[i]);
            scanf("%d", &servidores[i][0]);
            if (servidores[i][0] < 0) {
                printf("Erro: o valor não pode ser negativo.\n");
            }
        } while (servidores[i][0] < 0);

        do {
            printf("Quantidade de servidores com problemas na cidade %s: ", cidades[i]);
            scanf("%d", &servidores[i][1]);
            if (servidores[i][1] < 0) {
                printf("Erro: o valor não pode ser negativo.\n");
            }
        } while (servidores[i][1] < 0);

        // b) Calcular total de servidores
        servidores[i][2] = servidores[i][0] + servidores[i][1];
    }

    // c) Exibir os dados em formato de tabela
    printf("\nTabela de Servidores:\n");
    printf("%-20s | %-8s | %-12s | %-5s\n", "Cidade", "Ativos", "Com Problemas", "Total");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("%-20s | %-8d | %-12d | %-5d\n", 
               cidades[i], servidores[i][0], servidores[i][1], servidores[i][2]);
    }

    return 0;
}
