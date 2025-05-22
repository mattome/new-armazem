/*
6) Um professor maluco da UTFPR avalia seus alunos da seguinte maneira:

3 provas (com peso 20 cada)
1 conjunto de trabalhos menores durante o semestre (com peso 10)
1 projeto de um jogo com peso 30

A média regular do aluno será dada pela média ponderada das notas das 3 provas, 
nos projetos menores e do projeto do game. O aluno que atingir a nota igual ou superior a 60 estará aprovado, caso contrário, 
o aluno deverá realizar um exame onde a nota mínima necessária será dada pela fórmula:

NotaMinima = 120 – Média regular

O aluno aprovado via exame terá média final igual a 60 registrado no sistema.

Faça um programa que receba a nota das 3 provas, 1 nota dos projetos menores e 1 nota do projeto do game 
(todas as notas entre 0 e 100) e informe se o aluno está aprovado ou terá que realizar o exame.
Em caso de exame o sistema deverá solicitar a nota do exame e informar se o aluno está aprovado ou reprovado e 
qual sua nota final (com uma casa decimal).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int p1, p2, p3, trabalho_menor, projeto, media_regular, nota_minima, nota_exame;

    printf("Informe qual foi a nota da primeira prova: ");
    scanf("%d", &p1);
    printf("Informe qual foi a nota da primeira prova: ");
    scanf("%d", &p2);
    printf("Informe qual foi a nota da primeira prova: ");
    scanf("%d", &p3); 
    printf("Informe qual foi a nota do seu trabalho menor: ");
    scanf("%d", &trabalho_menor); 
    printf("Informe qual foi a nota do seu projeto: ");
    scanf("%d", &projeto);     

    p1 = p1*0.2;
    p2 = p2*0.2;
    p3 = p3*0.2;
    trabalho_menor = trabalho_menor*0.1;
    projeto = projeto*0.3;

    media_regular = p1+p2+p3+trabalho_menor+projeto;

    printf("Sua média regular é %d.\n", media_regular);

    if(media_regular >= 60){
        printf("Você foi aprovado.\n");
    }else {
        nota_minima = 120 - media_regular;
        printf("Você ficou de exame, sua nota mínima é %d.\n", nota_minima);
        printf("Quanto você tirou no exame: \n");
        scanf("%d", &nota_exame);

        if(nota_minima>nota_exame){
            printf("Você foi reprovado.\n");
        }else{
            printf("Vocé foi aprovado e sua média final foi 6\n");
        }
    }

   return 0;
}