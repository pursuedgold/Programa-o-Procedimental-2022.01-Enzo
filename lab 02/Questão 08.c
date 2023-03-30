#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, b;
    scanf("%lf %lf", &a, &b);
    if((a>10.0) || (a<0.0) || (b>10.0) || (b<0.0) )
    {
        printf("Nota invalida\n");
    }
    else
    {
        printf("A media entre eles eh %lf\n", (b+a)/2);
    }

    return 0;



}
