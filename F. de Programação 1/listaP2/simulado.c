/*Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de funcionar.
Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos 
jogos League of Legends, Valorant e Wild Rift.

Você foi convocado em uma missão de emergência para ajudar a identificar os locais das falhas e reestabelecer os serviços.

Para isso, faça um programa que armazene os dados de 5 cidades onde estão localizados os servidores com problemas, 
cada cidade possui: nome (20 caracteres), quantidade de servidores ativos(inteiro), quantidade de servidores com problemas
 (inteiro) e quantidade total de servidores(inteiro).

a) Faça um programa que receba os dados das 5 cidades: nome(strings), a quantidade de servidores ativos
   a quantidade de servidores com falha (salvos nas duas primeiras colunas de uma matriz de inteiros 5x3).
   Os valores não podem ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.
b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade e salve na última coluna da matriz;
c) Exiba em formato de tabela (com colunas alinhadas e separadas por | ) os nomes,  as 3 quantidades de servidores de todos 
as cidades.
d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus servidores (apenas 1 vez).
   Exiba uma mensagem informando também caso não encontre o nome buscado.
e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual de servidores com problemas (duas casas decimais).
f) Utilizando estrutura de repetição, calcule e exiba o percentual total de servidores ativos e de servidores com problemas.
g) Acrescente o texto "Defeated" ao final da string do nome todas as cidades que têm o número de servidores com problemas 
maiores que os servidores ativos.
   Em seguida exiba o nome de todas as cidades (alteradas ou não).
   Ex: "São Paulo" -> "São Paulo Defeated"

Obs.:
Sempre que possível, utilize estruturas de repetição;
Os itens devem ser executados sequencialmente (Não é um menu);

Treino Extra:
Faça cada item, de A a G, em uma função separada. Não utilize variáveis globais.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char cidade[5][20];

    for (int i = 0; i < 5; i++){
        printf("Digite o nome da cidade: ");
        fgets(cidade[i], 20, stdin);
        cidade[i][strcspn(cidade[i], "\n")]='\0';
        setbuf(stdin,NULL);
    }

/*a) Faça um programa que receba os dados das 5 cidades: nome(strings), a quantidade de servidores ativos
   a quantidade de servidores com falha (salvos nas duas primeiras colunas de uma matriz de inteiros 5x3).
   Os valores não podem ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.*/

    int servidores[5][3];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            do{
                if(j == 0){
                    printf("Digite quantos servidores estão ativos na cidade de %s: ", cidade[i]);
                    scanf("%d", &servidores[i][0]);
                }
                if(servidores[i][0] < 0){
                    printf("Valor inválido, digite novamente.\n");
                }
            }while(servidores[i][0] < 0);
            
            do{
                if(j == 1){
                    printf("Digite quantos servidores estão com problema na cidade de %s: ", cidade[i]);
                    scanf("%d", &servidores[i][1]);
                }
                if(servidores[i][1] < 0){
                    printf("Valor inválido, digite novamente.\n");
                }
            }while(servidores[i][1] < 0);
        }  
    }
    
/*b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade 
e salve na última coluna da matriz;*/  
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(j == 2){
                servidores[i][2] = servidores[i][0] + servidores[i][1];
            }
        } 
    }

/*c) Exiba em formato de tabela (com colunas alinhadas e separadas por | ) os nomes,  as 3 quantidades de servidores de todos 
as cidades.*/
   
    printf("\nTabela de Servidores:\n");
    printf("%-20s | %-8s | %-12s | %-5s\n", "Cidade", "Ativos", "Com Problemas", "Total");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-20s | %-8d | %-12d | %-5d\n", cidade[i], servidores[i][0], servidores[i][1], servidores[i][2]);
    }

/*d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus servidores (apenas 1 vez).
   Exiba uma mensagem informando também caso não encontre o nome buscado.*/

    char busca[20];
    int apareceu = 0;

    printf("Digite o nome da cidade que quer buscar: ");
    setbuf(stdin, NULL);
    fgets(busca, 20, stdin);
    busca[strcspn(busca, "\n")]='\0';

    for (int i = 0; i < 5; i++){
        if(strcmp(busca, cidade[i]) == 0){
            printf("Essa cidade está na lista e seus dados são: \n");
            printf("servidores ativos: %d\nservidores com problema: %d\nTotal de servidores: %d\n", servidores[i][0], servidores[i][1], servidores[i][2]);
            apareceu++;
        }
    }
    if(apareceu == 0){
        printf("Essa cidade não está na lista.\n");
    }

/*e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual de servidores 
com problemas (duas casas decimais).*/
    int maisServidores = 0, porcentagem = 0;

    for (int i = 0; i < 5; i++){
        if(maisServidores < servidores[i][1]){
            maisServidores = 0;
            maisServidores = maisServidores + servidores[i][1];
            porcentagem = 0;
            porcentagem = (maisServidores*100)/servidores[i][2];
        }
    }
    for (int i = 0; i < 5; i++){
        if(maisServidores == servidores[i][1]){
        printf("A cidade de %s é a com mais problemas nos servidores, com %d servidores com problema.\n", cidade[i], maisServidores);
        
        }
    }

//f) Utilizando estrutura de repetição, calcule e exiba o percentual total de servidores ativos e de servidores com problemas.

    int ativos = 0, problemas = 0, totalServidores = 0;

    for (int i = 0; i < 5; i++){
        ativos = ativos + servidores[i][0];
        problemas = problemas + servidores[i][1];
        totalServidores = totalServidores + servidores[i][2];
    }
    printf("%d\n%d\n", ativos, totalServidores);
        ativos = (ativos*100)/totalServidores;
        problemas = (problemas*100)/totalServidores;
    printf("%d porcento dos servidores estao ativos e %d porcento estao com problemas.\n", ativos, problemas);


/*g) Acrescente o texto "Defeated" ao final da string do nome todas as cidades que têm o número de servidores com problemas 
maiores que os servidores ativos.
   Em seguida exiba o nome de todas as cidades (alteradas ou não).
   Ex: "São Paulo" -> "São Paulo Defeated"*/   

    char defeated[20] = " Defealted";
    for (int i = 0; i < 5; i++){
        if(servidores[i][1] > servidores[i][0]){
            strcat(cidade[i],defeated);
            printf("%s \n", cidade[i]);
        }
    }
    
 
    return 0;
}