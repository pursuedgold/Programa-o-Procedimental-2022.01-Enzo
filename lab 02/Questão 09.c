#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, b;
    scanf("%lf %lf", &a, &b);
    if( b > (a*0.2))
    {
        printf("Emprestimo nao concedido\n");
    }
    else
    {
        printf("Emprestimo concedido\n");
    }

    return 0;



}
