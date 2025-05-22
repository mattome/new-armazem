#include <stdio.h>

int main() {
    double deposito_inicial = 500.0;
    double juros = 0.01; 
    int meses = 3;
    double saldo = deposito_inicial;
    
    for (int i = 0; i < meses; i++) {
       saldo += saldo * juros; 
    }

    printf("O valor da conta após %d meses é: R$ %.2f\n", meses, saldo);

    return 0;
}