/*Construa uma estrutura aluno com nome, curso e 4 notas, média e situação.
 Leia as informações nome, curso e notas do teclado, calcule a média e armazene a situação do aluno.
- media ≥ 7 → Aprovado;
- 3 ≤ media < 7 → Exame;
- media < 3 → Reprovado;*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct aluno{
    char nome[20];
    char curso[20];
    float notas[4];
    float media;
    char situacao[10];
};

int main() {
    struct aluno aluno1;

    setbuf(stdin,NULL);
    printf("Digite o nome do aluno: ");
    fgets(aluno1.nome, 20, stdin);
    aluno1.nome[strcspn(aluno1.nome,"\n")]='\0';
    setbuf(stdin,NULL);

    setbuf(stdin,NULL);
    printf("Digite o curso do aluno: ");
    fgets(aluno1.curso, 20, stdin);
    aluno1.curso[strcspn(aluno1.curso,"\n")]='\0';
    setbuf(stdin,NULL);

    aluno1.media = 0;

    for(int i = 0; i < 4; i++){
        printf("Digite a %d°  nota: ", i + 1);
        scanf("%f", &aluno1.notas[i]);
        aluno1.media = aluno1.media + aluno1.notas[i];
    }
    
    aluno1.media = aluno1.media/4;

    if(aluno1.media >= 7){
        strcpy(aluno1.situacao, "Aprovado");
    }else if(3 <= aluno1.media && aluno1.media < 7){
        strcpy(aluno1.situacao, "Exame");
    }else {
        strcpy(aluno1.situacao, "Reprovado");
    }

    printf("O nome do aluno é %s\n", aluno1.nome);
    printf("O aluno faz %s\n", aluno1.curso);
    printf("A média do aluno é %.2f\n", aluno1.media);
    printf("%s\n", aluno1.situacao);

    return 0;
}