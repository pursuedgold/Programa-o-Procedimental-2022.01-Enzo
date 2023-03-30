#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, c, b;
    scanf("%lf %lf %lf", &a, &b, &c);
    double media = (a+b+(c*2))/4;
    printf("A media ponderada eh %lf \n", media);
    if ( media >= 60) printf("Aprovado\n"); else printf("Reprovado\n");

    return 0;



}
