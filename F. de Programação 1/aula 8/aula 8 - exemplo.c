#include <stdio.h>
#include <stdlib.h>

/*int main() {

    int i = 1;
    int cm = 0; //conta multiplos
    int sm = 0; //soma multiplo

    while (i <= 100){
        if(i % 7 == 0){//testa se é multiplo de 7
            cm++;
            sm = sm +i;
            printf("Valor %d | acumulado %d\n", i, sm);
        }

        i++;
    }
    printf("EXistem %d multiplos de 7\n",cm);
    printf("A soma acumulada dos multiplos dos multiplos é %d\n", sm);
    return 0;
}*/



int main(){
    setbuf(stdout, NULL);
    int idade;
    int i = 1;
    int cmi = 0;//contador maior de idade
    int si = 0; //soma maiores de idades
    int mediaIdade;

    while(i <= 10){
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        if(idade >= 18){
            printf("A idade %d é maior de idade.\n",idade);
            cmi++;
            si = si + idade;
        }
        i++;
    }
    printf("Foram contadas %d pessoas maiores de idades.\n",cmi);
    printf("A soma das idades maiores é %d\n",si);
    mediaIdade = si / cmi;
    printf("A media de idade é %d\n", mediaIdade);
    return 0;
}