#include <stdio.h>

int main()
{
   float tempov = 35;
   tempov = tempov/60; //tempo veiculo
   float velocidadem = 80; //velocidade média
   float distancia;
   distancia = velocidadem * tempov;
   float mck = 12; // média de combustivel por km
   float litrosg; //litros gastos
   litrosg = distancia/mck;
   
    printf (" %.3f",tempov);
    printf ("\n %.2f", distancia);
    printf ("\n %.2f",litrosg);
    printf ("\n A quantidade de litros de combustível gastos na viagem é aproximadamente %.2f"),litrosg;
    return0;
}