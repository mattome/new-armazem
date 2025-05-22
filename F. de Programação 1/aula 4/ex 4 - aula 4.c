#include <stdio.h>

#define ALTURA 1.75 

int main() {
    // Fórmula do peso ideal
    double peso_ideal = 72.7 * ALTURA - 58;

    printf("A altura da pessoa é: %.2f metros\n", ALTURA);
    printf("O peso ideal é: %.2f kg\n", peso_ideal);

    return 0;
}