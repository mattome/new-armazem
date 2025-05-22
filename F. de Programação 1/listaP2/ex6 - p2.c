/* Faça um programa que leia e armazene as notas (valores reais) de 10 alunos.
O programa somente deverá aceitar notas entre 0 e 10 (inclusive), solicitando uma nova digitação quando uma nota inválida 
for digitada. Após a leitura o programa deve:

a) Contar e exibir quantos alunos foram reprovados (nota < 6.0);
b) Exibir as notas dos alunos que foram aprovados (nota >= 6.0);
c) Calcular e exibir a média geral de todas as notas;
d) Calcular e exibir a porcentagem de alunos aprovados;
e) Exibir a nota mais alta e a mais baixa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    float nota[10], media = 0;
    int reprovados = 0, aprovados = 0, porcentagem = 0;

    for(int i = 0; i < 10; i++){
        do{
            printf("Digite a nota aluno %d(entre 0 e 10): ", i + 1);
            scanf("%f", &nota[i]); 
            if(nota[i] < 0 || nota[i] > 10){
                printf("Nota invalida, digite novamenete.\n");
            }       
        } while (nota[i] < 0 || nota[i] > 10);
    }

    for (int i = 0; i < 10; i++){
        if(nota[i] < 6)reprovados++;
        if(nota[i] >= 6)aprovados++;
    }
    //a) Contar e exibir quantos alunos foram reprovados (nota < 6.0);
    printf("\nForam reprovados %d alunos", reprovados);
    //b) Exibir as notas dos alunos que foram aprovados (nota >= 6.0);
    printf("\nForam aprovados %d alunos", aprovados);

    //c) Calcular e exibir a média geral de todas as notas;
    for(int i = 0; i < 10; i++){
        media = media + nota[i];
    }
    media = media / 10;
    printf("\nA media da sala foi %.2f\n", media);


    //d) Calcular e exibir a porcentagem de alunos aprovados;
    porcentagem = (aprovados*100)/10;
    printf("A sala teve %d porcento de aprovação\n", porcentagem);


    //e) Exibir a nota mais alta e a mais baixa.
    int notaBaixa = 10, notaAlta = 0;
    for (int i = 0; i < 10; i++){
        if (notaBaixa > nota[i]){
            notaBaixa = nota[i];
        }
        if (notaAlta < nota[i]){
            notaAlta = nota[i];
        }
    }
    printf("A nota mais baixa é %d", notaBaixa);
    printf("\nA nota mais alta é %d", notaAlta);
    

    return 0;
}