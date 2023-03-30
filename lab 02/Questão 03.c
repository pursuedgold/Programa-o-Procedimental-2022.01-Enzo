#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a;
    scanf("%lf", &a);
    if(a>=0)printf("%lf", sqrt(a));
    else printf("%lf", a*a);
    return 0;



}
