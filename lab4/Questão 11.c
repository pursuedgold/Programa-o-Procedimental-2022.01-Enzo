
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double media(double a, double b, double c, char t);
int main()
{
    printf("Digite os as notas: \n");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Qual o tipo de media? \n");
    char t;
    scanf(" %c", &t);
    printf(" A media eh: %lf", media(a, b, c, t));

    return 0;
}

double media(double a, double b, double c, char t){
    
    double m = 0;
    if(t=='A' || t=='a'){
           m=(a+b+c)/3;
    }
    else m = ((a*5)+(b*3)+(c*4))/12;
    return m;
    
}
