#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int
main () 
{
  
 
double custo;

scanf("%lf", &custo);
if(custo<=12000)custo+=custo*0.05;
else if(custo<=25000)custo+=(custo*0.10)+(custo*0.15);
else custo+=(custo*0.15)+(custo*0.20);


printf("O preco de seu carro eh de %lf reais", custo);
 
return 0;
  
}