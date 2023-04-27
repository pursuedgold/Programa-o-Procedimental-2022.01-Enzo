
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void maior(double a, double b);
int main()
{
    printf("Digite os valores: \n");
    double a, b;
    scanf("%lf %lf", &a, &b);
    maior(a,b);

    return 0;
}

void maior(double a, double b){
    
    if(a>b) printf("%lf eh maior", a);
    else if(a,b) printf("%lf eh maior", b);
    else printf("sao iguais");
    
}
