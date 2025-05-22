//10) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:
//Hn=1+(1/2)+(1/3)+(1/4)+...+(1/n)

#include <stdio.h>
#include <stdlib.h>

float Hn(int valor){
    if(valor == 1){
        return 1.0;
    }
    return 1.0/valor + Hn(valor - 1);
}

int main(){
    int n = 5;

    float resultado = Hn(n);
    printf("O numero harmonico de n é %.2f", resultado);

    return 0;
}