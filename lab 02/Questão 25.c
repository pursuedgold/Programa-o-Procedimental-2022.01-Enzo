#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int
main () 
{
  
 
double a, b, c;

scanf("%lf %lf %lf", &a, &b, &c);

double delta;
delta = (b*b) - (4*a*c);
if (delta<0)printf("Delta Negativo! Nao admite raiz\n");
else if (delta==0){
        printf("A raiz eh unica! Seu valor eh %lf", ((-1)*b)/2);
} else {
    printf("Duas Raizes. Os valores sao %.3lf e %.3lf\n", ((-1)*b+sqrt(delta))/2, ((-1)*b-sqrt(delta))/2);
}


 
return 0;
  
}