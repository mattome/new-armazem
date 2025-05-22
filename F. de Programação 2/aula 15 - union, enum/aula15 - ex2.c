/*Você foi contratado para desenvolver um sistema de cadastro de pessoas que permitirá armazenar
 e exibir informações essenciais de 5 indivíduos. Seu programa deve solicitar os seguintes dados para cada pessoa:

Nome, Idade, Peso, Data de nascimento (dia, mês e ano), Nacionalidade (Brasileiro ou Estrangeiro),
Documento de identificação: Se for brasileiro, deve armazenar o CPF ou se for estrangeiro, deve armazenar o Passaporte

Regras obrigatórias:
Utilize structs para estruturar os dados da pessoa;
Utilize typedef para facilitar a definição de tipos personalizados;
Utilize union para armazenar CPF ou Passaporte, garantindo eficiência na memória;
Utilize enum para representar a nacionalidade da pessoa (Brasileiro ou Estrangeiro).
Após o cadastro, o programa deve exibir todas as informações cadastradas de maneira clara e organizada.*/

#include <stdio.h>
#include <stdlib.h>

typedef enum {BRASILEIRO = 1, ESTRANGEIRO} Nascionalidade;

typedef struct{
    int dia[5];
    int mes[5];
    int ano[5];
} Data;

typedef struct {
    char nome[5][20];
    int idade[5];
    float peso[5];
    Data nascimento;
    union{
        char cpf[5][15];
        char passaporte[5][20];
    } documento;
    Nascionalidade nascionalidade[5];
} Cadastro;

 

int main(){
    Cadastro cadastro;

    for (int i = 0; i < 4; i++){
        printf("Qual o nome da %dº pessoa: \n", i + 1);
        setbuf(stdin,NULL);
        fgets(cadastro.nome[i],20,stdin);
        cadastro.nome[i][strcspn(cadastro.nome[i],"\n")]='\0';

        printf("Digite a idade da %dº pessoa: \n", i +1);
        scanf("%i", &cadastro.idade[i]);

        printf("Digite o peso da %dº pessoa: \n", i +1);
        scanf("%f", &cadastro.peso[i]);

        printf("Digite a data de nascimento da %dº pessoa: \n", i +1);
        scanf("%i %i %i", &cadastro.nascimento.dia[i], &cadastro.nascimento.mes[i], &cadastro.nascimento.ano[i]);

        printf("Digite digite 1 se a %dº pessoa for brasileirae 2 se a %dº for estrangeira): \n", i +1, i + 1);
        scanf("%d", &cadastro.nascionalidade[i]);
        

        if (cadastro.nascionalidade[i] == 1){
            printf("Qual o cpf da 1º pessoa:" );
            setbuf(stdin,NULL);
            fgets(cadastro.documento.cpf[i],15,stdin);
            cadastro.documento.cpf[i][strcspn(cadastro.documento.cpf[i],"\n")]='\0';
        }
        else if (cadastro.nascionalidade[i] == 2){
            printf("Qual o passaporte da 1º pessoa:" );
            setbuf(stdin,NULL);
            fgets(cadastro.documento.passaporte[i],20,stdin);
            cadastro.documento.passaporte[i][strcspn(cadastro.documento.passaporte[i],"\n")]='\0';
        }
        
    }

    printf("\n===== DADOS CADASTRADOS =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", cadastro.nome[i]);
        printf("Idade: %d\n", cadastro.idade[i]);
        printf("Peso: %.2f\n", cadastro.peso[i]);
        printf("Data de Nascimento: %02d/%02d/%04d\n", cadastro.nascimento.dia[i], cadastro.nascimento.mes[i], cadastro.nascimento.ano[i]);

        printf("Nacionalidade: %s\n", 
            cadastro.nascionalidade[i] == BRASILEIRO ? "Brasileiro" : "Estrangeiro");

        if (cadastro.nascionalidade[i] == BRASILEIRO) {
            printf("CPF: %s\n", cadastro.documento.cpf[i]);
        } else {
            printf("Passaporte: %s\n", cadastro.documento.passaporte[i]);
        }
    }
        

    return 0;
}