#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int
main () 
{
  
 
int d, a, m;
  
 
 
 
scanf ("%d %d %d", &d, &m, &a);
  
if (a > 2022)
    printf ("Data invalida!\n");
  
  else
  
if (a % 4 == 0 && a % 100 != 0)
    {
      
printf ("Ano bissexto\n");
      
if (m < 13 && m > 0)
	{
	  
if (m == 2 && d > 29)
	    {
	      
printf ("Data Invalida!\n");
	    
}
	  else if (m == 2)
	    printf ("Data Valida\n");
	  
	  else if (d > 31)
	    printf ("Data Invalida!\n");
	  
	  else
	    printf ("Data Valida\n");
	
}
      else
	printf ("Data Invalida!\n");
    
}
  
if (m < 13 && m > 0)
    {
      
if (m == 2 && d > 28)
	printf ("Data Invalida\n");
      
      else if (d > 31)
	printf ("Data Invalida!\n");
      
      else
	printf ("Data Valida\n");
    
}
  else
    printf ("Data Invalida!\n");
  
 
 
 
 
return 0;
  
