#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a;



    scanf("%d", &a);
    if (a%400==0)printf("Ano bissexto!\n");
    else if (a%4==0 && a%100!=0) printf("Ano bissexto\n");
    else printf("Nao eh bissexto\n");


    return 0;



}
