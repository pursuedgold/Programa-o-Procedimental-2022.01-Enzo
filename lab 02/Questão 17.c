#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a==0 || b==0)printf("Base invalida!\n");
    else printf("A area do trapezio eh %lf", ((a+b)*c)/2.0);





    return 0;



}
