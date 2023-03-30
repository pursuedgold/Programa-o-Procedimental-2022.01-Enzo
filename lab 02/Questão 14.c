#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, c, b;
    scanf("%lf %lf %lf", &a, &b, &c);
    double media = ((a*2)+(b*3)+(c*5))/10;
    printf("A media ponderada eh %lf \n", media);
    if ( media >= 5)
        printf("Aprovado\n");
    else if (media>=3)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

    return 0;



}
