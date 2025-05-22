/*5) Crie um programa que gerencie um cadastro de materiais para obras disponíveis em um fornecedor. 
Cada material contém: nome (tamanho máximo 40 caracteres), quantidade (int) e preço (float) de no máximo 15 produtos. 
O programa deve possuir um menu para que o usuário do programa consiga manipular os cadastros. Nesse menu

a) Ao digitar (I), deve-se realizar inserção de um material na primeira posição que estiver livre;
b) Ao digitar (R), deve-se remover o material pelo índice (a ser fornecido pelo usuário );
c) Ao digitar (L), deve-se listar todos os cadastros não vazios;
d) Ao digitar (P), deve-se solicitar o nome de um material e exibir a quantidade e o preço;
e) Ao digitar (V), deve-se listar todos os produtos que tenham a quantidade igual a 0;
f) Ao digitar (S), deve sair do programa.

Obs: Cada opção do menu deve ser implementada em uma função diferente. Após cada função o menu deve ser reexibido (Exceto opção S)
Não utilize variáveis globais. Utilize passagem de parâmetros quando necessário.
Não se esqueça de criar um método para gerenciar qual posição do vetor está vazia ou não.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//estrutura dos materiais
typedef struct {
    char nome[40];
    int quantidade;
    float preco;
} Material;

void limpaBuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void leString(char texto[], int tamanho){
    fgets(texto, tamanho, stdin);
    texto[strcspn(texto,"\n")] = '\0';
}

//a) Ao digitar (I), deve-se realizar inserção de um material na primeira posição que estiver livre;
void adicionar(Material* materiais[]){
    for (int i = 0; i < 15; i++){
        if(materiais[i] == NULL){
            materiais[i] = malloc(sizeof(Material));

            limpaBuffer();
            printf("Digite o nome do novo material: ");
            leString(materiais[i]->nome, 40);
            printf("Qual a quantidade do produto: ");
            scanf("%d", &materiais[i]->quantidade);
            printf("Qual o preço do produto: ");
            scanf("%f", &materiais[i]->preco);
            return;
        }
    }
    printf("Não há posições livres para inserir novo material.\n");
}


//b) Ao digitar (R), deve-se remover o material pelo índice (a ser fornecido pelo usuário );
void remover(Material* materiais[]){
    int indice;
    
    printf("Qual o indice do material: ");
    scanf("%d", &indice);
    
    printf("%s removido com sucesso\n", materiais[indice]->nome);
    materiais[indice] = NULL;
    
    // for (int i = 0; i < 15; i++){
    //     if (indice == i){
    //     }
        
    // }
}

//c) Ao digitar (L), deve-se listar todos os cadastros não vazios;
void lista(Material* materiais[]){
    printf("\n%-20s|%-20s|%-20s\n", "Nome do material", "Quantidade", "Preço");
    for (int i = 0; i < 15; i++){
        if (materiais[i] != NULL){
            printf("%-20s|%-20d|%-20.2f\n", (materiais[i]->nome), (materiais[i]->quantidade), (materiais[i]->preco));
        }
        
    }
}

//d) Ao digitar (P), deve-se solicitar o nome de um material e exibir a quantidade e o preço;
void solicitar(Material* materiais[]){
    char procurado[40];
    for (int i = 0; i < 15; i++){
        limpaBuffer();
        do{
            printf("Qual material voce procura:");
            leString(procurado, 40);
            
            if(strcmp(procurado, materiais[i]->nome) == 0){
                printf("%-20s|%-20s\n", "Quantidade", "Preco");
                printf("%-20d|%-20.2f\n", materiais[i]->quantidade,materiais[i]->preco);                
            }
            else{
                printf("Material não encontrado, tente novamente\n");
            }
        } while (strcmp(procurado, materiais[i]->nome) != 0);    
        return;
    }
    
}

//e) Ao digitar (V), deve-se listar todos os produtos que tenham a quantidade igual a 0;
void quantidadeZero(Material* materiais[]){
    int zeros = 0;
    printf("O(s) produto(s) que nao estao em estoque sao:\n");
    
    for (int i = 0; i < 15; i++){
        if (materiais[i]->quantidade == 0){
            printf("%s\n", materiais[i]->nome);
            zeros++;
        }
    }if(zeros == 0){
        printf("Todos os produtos estão em estoque");
    }
    return;
}

int main() {
    Material materiais[15] = {
        {"Cimento", 100, 38.50},
        {"Areia", 200, 150.00},
        {"Brita", 150, 170.00},
        {"Tijolo", 1000, 0.80},
        {"Vergalhão", 50, 25.00},
        {"Caibro", 30, 18.00},
        {"Telha", 0, 3.50},
        {"Prego", 500, 0.10},
        {"Argamassa", 80, 22.90},
        {"Tinta branca", 20, 85.00},
        {"Tinta azul", 10, 89.90},
        {"Canos PVC", 60, 12.00},
        {"Fio elétrico", 100, 1.50},
        {"Tomada", 30, 7.00},
        {"Interruptor", 30, 6.50}
    };

    Material *ponteiros[15];          // array de ponteiros para essas structs

    // Fazendo os ponteiros apontarem para as structs
    for (int i = 0; i < 15; i++) {
        ponteiros[i] = &materiais[i];
    }

    char opcao;
    do{
        printf("============Menu============\n");
        printf("============================\n");
        printf("I -> REALIZA A INSERÇÃO DE UM MATERIAL NA POSIÇÃO LIVRE\n");
        printf("R -> REMOVER O MATERIAL PELO INDICE\n");
        printf("L -> LISTA TODOS OS CADASTROS NÃO VAZIOS\n");
        printf("P -> INSIRA O NOME DO MATERIAL\n");
        printf("V -> PRODUTOS EM FALTA\n");
        printf("S -> SAIR DO MENU\n");

        printf("Digite a opção desejada:");
        scanf(" %c", &opcao);
        opcao = toupper(opcao); // converte para maiúscula
        printf("%c", opcao);

        switch (opcao){
        case 'I':
            adicionar(ponteiros);
            break;

        case 'R':
            remover(ponteiros);
            break;

        case 'L':
            lista(ponteiros);
            break;

        case 'P':
            solicitar(ponteiros);
            break;

        case 'V':
            quantidadeZero(ponteiros);
            break;
        
        case 'S':
            break;
            
        default:
            printf("Opção inválida!\n");
        }
    }while (opcao != 'S');

   
    return 0;
}