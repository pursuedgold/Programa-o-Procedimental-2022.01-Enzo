#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a;
    scanf("%lf", &a);
    if(a>=0)printf("Raiz do numero: %lf \nNumero ao quadrado: %lf", sqrt(a), a*a);
    else printf("Numero Invalido");
    return 0;



}
