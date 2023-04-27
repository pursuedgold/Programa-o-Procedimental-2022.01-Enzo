#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool triangulo(double a, double b,double c){
if (a>(b+c)) return 0;
else if (b>(a+c)) return 0;
else if (c>(a+b)) return 0;
else return 1;
}

void tipot(double a, double b, double c){
if (a==b && a==c) printf("Equilatero!\n");
else if (a==c || a==b)printf("Isoceles!\n");
else printf("Escaleno!\n");
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(triangulo(a, b, c)){
            printf("Eh um triangulo ");
    tipot(a, b, c);

    }   else printf("Nao eh um triangulo!\n");
    return 0;
}
