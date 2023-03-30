#include <stdio.h>
#include <stdlib.h>

int main()
{


int horas, minutos, segundos, duracao;

scanf("%d %d %d %d", &horas, &minutos, &segundos, &duracao);

int segundos1 = duracao%60;
int minutos1 = duracao/60;
int horas1 = minutos1/60;
minutos1 = minutos1%60;

horas += horas1;
minutos += minutos1;
segundos += segundos1;

if( horas >= 24)horas-= 24;

printf("%d Horas, %d Minutos, %d Segundos \n", horas, minutos, segundos);





return 0;

}
