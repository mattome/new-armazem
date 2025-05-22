#include <stdio.h>

// Função recursiva para calcular a série
double serie(int n) {
    if (n == 1) {
        return (1.0 + 1.0 * 1.0) / 1.0; // primeiro termo: (1 + 1^2)/1 = 2
    } else {
        return ((1.0 + n * n) / n) + serie(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um valor inteiro maior que zero: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O valor deve ser maior que zero.\n");
        return 1;
    }

    double resultado = serie(n);
    printf("O valor da série S é: %.2f\n", resultado);

    return 0;
}
