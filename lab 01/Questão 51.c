#include <stdio.h>
#include <stdlib.h>

int main()
{
    double  x, y, d;

    scanf("%lf %lf", &x, &y);

    if(x == 0)d=y;
    else if (y==0)d=x;
    else d=sqrt((x*x)+(y*y));

    printf("A distancia do ponto origem e: %lf", d);





    return 0;


}
