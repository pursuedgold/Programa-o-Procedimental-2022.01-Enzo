
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double hipotenusa(double a, double b);
int main()
{
    printf("Digite os valores dos catetos: \n");
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("o valor da hipotenusa eh de %lf", hipotenusa(a, b));

    return 0;
}
double hipotenusa(double a, double b){
    
    double h;
    h = sqrt((a*a)+(b*b));
    return h;
    
}
