#include <stdio.h>
#include <stdlib.h>

int main()
{


double a;




    scanf("%lf", &a);


    printf("Valor a vista: R$%lf, Comissao de R$%lf\nParcelado em 3x sem juros: R$%lf, Comissao de R$%lf", a*0.95, (a*0.95)*0.05, a/3, a*0.05);








return 0;

}
