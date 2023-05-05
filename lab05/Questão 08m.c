#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int
main () 
{
  
double a[2][2], b[2][2], c;
  
int i, j, e;
  
 
for (i = 0; i < 2; i++)
    {
      
for (j = 0; j < 2; j++)
	{
	  
scanf ("%lf", &a[i][j]);
	
 
}
    
}
  
for (i = 0; i < 2; i++)
    {
      
for (j = 0; j < 2; j++)
	{
	  
scanf ("%lf", &b[i][j]);
	
 
}
    
}
  
while (1)
    {
      
printf
	("Escolha uma operacao:\n1.somar matrizes\n2.subtrair matrizes\n3.adicionar uma constante\n4.imprimir matrizes\n");
      
scanf ("%d", &e);
      
if (e == 1)
	{
	  
printf ("[%lf] [%lf]\n[%lf] [%lf]\n", a[1][1] + b[1][1],
		   a[1][2] + b[1][2], a[2][1] + b[2][1], a[2][2] + b[2][2]);
	
}
      else if (e == 2)
	printf ("[%lf] [%lf]\n[%lf] [%lf]\n", a[1][1] - b[1][1],
		a[1][2] - b[1][2], a[2][1] - b[2][1], a[2][2] - b[2][2]);
      
      else if (e == 3)
	{
	  
printf ("Digite a constante desejada:\n");
	  
scanf ("%lf", &c);
	  
a[1][1] *= c;
	  a[2][1] *= c;
	  a[2][2] *= c;
	  a[1][2] *= c;
	  b[1][1] *= c;
	  b[1][2] *= c;
	  b[2][1] *= c;
	  b[2][2] *= c;
	
}
      
      else if (e == 4)
	{
	  
printf ("Matriz A:\n");
	  
for (i = 0; i < 2; i++)
	    {
	      
for (j = 0; j < 1; j++)
		{
		  
printf ("[%lf] [%lf]\n", a[i][j], a[i][j + 1]);
		
 
}
}
	      
printf ("Matriz B:\n");
	      
for (i = 0; i < 2; i++)
		{
		  
for (j = 0; j < 1; j++)
		    {
		      
printf ("[%lf] [%lf]\n", b[i][j], b[i][j + 1]);
		    
 
}
		  
		  
		
}
	    
}
	

else
		  break;
}
      
 
 
return 0;
    
}
