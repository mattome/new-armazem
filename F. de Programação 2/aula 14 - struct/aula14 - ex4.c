/*Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:
- Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em kW) e 
tempo ativo por dia (real, em horas).
- Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de
 cada eletrodoméstico (consumo/consumo total) nesse período de tempo. Apresente este último dado em porcentagem.*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 #include <string.h>
 
 typedef struct {
     char nome[15];
     float potencia; // em kW
     int tempo; // horas por dia
 } eletrodomestico;
 
 int main() {
     eletrodomestico elet[5];
     float consumo_total = 0;
     int dias;
 
     // Leitura dos eletrodomésticos
     for (int i = 0; i < 5; i++) {
         printf("Qual o nome do %i° eletrodoméstico: ", i + 1);
         setbuf(stdin, NULL);
         fgets(elet[i].nome, 15, stdin);
         elet[i].nome[strcspn(elet[i].nome, "\n")] = '\0'; // Remover o '\n'
 
         printf("Qual a potência (kW): ");
         scanf("%f", &elet[i].potencia);
 
         printf("Quantas horas por dia ele fica ligado: ");
         scanf("%i", &elet[i].tempo);
     }
 
     // Leitura do número de dias
     printf("\nDigite o tempo total em dias: ");
     scanf("%d", &dias);
 
     // Cálculo do consumo total da casa
     for (int i = 0; i < 5; i++) {
         consumo_total += elet[i].potencia * elet[i].tempo * dias;
     }
 
     // Exibição dos resultados
     printf("\nConsumo total da casa em %d dias: %.2f kWh\n", dias, consumo_total);
     printf("Consumo relativo de cada eletrodoméstico:\n");
 
     for (int i = 0; i < 5; i++) {
         float consumo_individual = elet[i].potencia * elet[i].tempo * dias;
         float percentual = (consumo_individual / consumo_total) * 100;
         printf("%s: %.2f kWh (%.2f%%)\n", elet[i].nome, consumo_individual, percentual);
     }
 
     return 0;
 }
 