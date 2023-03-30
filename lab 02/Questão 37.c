#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


int horas, minutos, horas1, minutos1;

scanf("%d %d %d %d", &horas, &minutos, &horas1, &minutos1);

int horas2;
if ( horas > horas1)horas1+=24;
horas2 = horas1-horas;
if (minutos<minutos1){
horas2 ++;
}

double hf = horas2, valor;

if (hf>=5){
    hf-=4;
    valor = 4.8 + (hf*2);
    
} else if(hf>2){
    hf-=2;
    valor = 2 + (hf*1.4);
} else valor = hf;

printf("O valor a ser pago eh de %.2lf reais\n", valor);
return 0;

}