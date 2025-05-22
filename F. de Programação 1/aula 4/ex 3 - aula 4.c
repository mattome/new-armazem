#include <stdio.h>

int main() {
    int A = 40; 
    int B = -1; 

    printf("Operações com A = %d e B = %d:\n", A, B);
    printf("A + B = %d\n", A + B);
    printf("A - B = %d\n", A - B);
    printf("A * B = %d\n", A * B);
    printf("A / B = %d\n", A / B);

    B++;

    printf("\nApós incrementar B em uma unidade (B = %d):\n", B);
    printf("A + B = %d\n", A + B);
    printf("A - B = %d\n", A - B);
    printf("A * B = %d\n", A * B);
    printf("A / B = %d\n", A / B);

    return 0;
}