#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, b;
    scanf("%lf %lf", &a, &b);
    if (a<1.20){
            if(b<=60)printf("A\n");
            else if(b<=90)printf("D\n");
            else printf("G\n");
    } else
    if (a<=1.70){
            if(b<=60)printf("B\n");
            else if(b<=90)printf("E\n");
            else printf("H\n");
    } else {
            if(b<=60)printf("C\n");
            else if(b<=90)printf("f\n");
            else printf("I\n");
    }






    return 0;



}
