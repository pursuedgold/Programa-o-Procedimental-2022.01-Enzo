#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a;
    char b;
    scanf("%lf %c", &a, &b);


    if( b == 'm' || b=='M')
    {
        printf("Sexo Masculino\nO peso ideal eh %lf", (a*72.7)-58.0);
    }
    else if (b=='f' || b=='F')
    {
        printf("Sexo Feminino\nO peso ideal eh %lf", (a*62.1)-44.7);
    }else printf("Caracter Invalido\n");

    return 0;



}
