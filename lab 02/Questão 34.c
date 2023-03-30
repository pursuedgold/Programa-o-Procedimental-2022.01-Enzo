#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double nota, falta;
    scanf("%lf %lf", &nota, &falta);
    if(nota<=3.9)printf("Conceito E\n");
    else if(nota<=4.9 && falta<21)printf("Conceito D\n");
    else if(nota<=4.9 && falta>20)printf("Conceito E\n");
    else if(nota<=7.4 && falta<21)printf("Conceito C\n");
    else if(nota<=7.4 && falta>20)printf("Conceito D\n");
    else if(nota<=8.9 && falta<21)printf("Conceito B\n");
    else if(nota<=8.9 && falta>20)printf("Conceito C\n");
    else if(nota<=10 && falta<21)printf("Conceito A\n");
    else if(nota<=10 && falta>20)printf("Conceito B\n");










    return 0;



}

