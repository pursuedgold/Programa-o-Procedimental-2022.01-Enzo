#include <stdio.h>
#include <stdlib.h>

double consumo(double a, double b){

return a/b;

}

int main()
{
    double dist, litros;
    scanf("%lf %lf", &dist, &litros);
    if( consumo(dist, litros)<8) printf("Venda o carro!\n");
    else if (consumo(dist, litros)<14)printf("Economico!\n");
    else printf("Super Economico!\n");


    return 0;
}
