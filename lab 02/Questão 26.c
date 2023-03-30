#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, b, consumo;
    scanf("%d %d", &a, &b);
    consumo= a/b;
    if(consumo<8)printf("Venda o carro!\n");
    else if (consumo > 14)printf("Super Economico!\n");
    else printf("Economico!\n");




    return 0;



}
