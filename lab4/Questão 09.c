
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double vcilindro(double a, double b);
int main()
{
    printf("Digite os valores dos raio e altura: \n");
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("o volume do cilindro eh de %lf", vcilindro(a, b));

    return 0;
}
double vcilindro(double a, double b){
    
    double volume;
    volume = 3.141592*(a*a)*b;
    return volume;
    
}
