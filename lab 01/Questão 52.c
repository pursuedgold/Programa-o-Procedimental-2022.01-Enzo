#include <stdio.h>
#include <stdlib.h>

int main()
{
    double  v1, v2, v3, vt, parte, p;

    scanf("%lf %lf %lf %lf", &v1, &v2, &v3, &p);

    parte = (v1+v2+v3)/100;
    vt = v1+v2+v3;


    printf("O primeiro amigo ganhou R$%lf do premio! \nO segundo amigo ganhou um total de R$%lf do premio!\n O terceiro amigo ganhou um total de R$%lf do premio!", ((v1/parte)/100)*p, ((v2/parte)/100)*p, ((v3/parte)/100)*p);






    return 0;


}
