#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double valor1, valor2;
    scanf("%lf", &valor1);
    if(valor1<50)valor2=valor1*1.05;
    else if (valor1<=100)valor2=valor1*1.10;
    else valor2=valor1*1.15;


        printf("O novo valor eh %.2lf\n", valor2);
    if(valor2<80)printf("Barato!\n");
    else if(valor2<=120)printf("Normal!\n");
    else if(valor2<=200)printf("Caro!\n");
    else printf("Muito Caro!\n");










    return 0;



}

