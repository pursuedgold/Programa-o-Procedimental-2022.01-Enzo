#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int a;
scanf("%d", &a);
 if(a%3==0 && a%5==0){

    printf("Eh divisivel por 3 e por 5 ao mesmo tempo");

 }else if(a%3==0) printf("Eh divisivel por 3");
 else if (a %5==0)printf("Eh divisivel por 05");
 else printf("Nao eh divisivel por 3 nem por 5");


   return 0;
}
