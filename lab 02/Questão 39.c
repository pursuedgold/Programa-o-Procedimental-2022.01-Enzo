#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int
main () 
{
  
 
int tempo;
double salario;

scanf("%lf %d", &salario, &tempo);
if(salario<=500)salario+=salario*0.25;
else if(salario<=1000)salario+=salario*0.20;
else if(salario<=1500)salario+=salario*0.15;
else if(salario<=2000)salario+=salario*0.10;

if(tempo>10)salario+=500;
else if(tempo>=7)salario+=300;
else if(tempo>=4)salario+=200;
else if(tempo>1)salario+=100;


printf("O novo salario do funcionario eh de %lf reais", salario);
 
return 0;
  
}