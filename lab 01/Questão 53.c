#include <stdio.h>
#include <stdlib.h>

int main()
{
    double  c, l, t, perimetro;

    scanf("%lf %lf %lf", &c, &l, &t);
    perimetro = c*2+l*2;

    printf("O custo para cercar este terreno de tela e de R$%.2lf! Sem descontos!\n", perimetro*t);






    return 0;


}
