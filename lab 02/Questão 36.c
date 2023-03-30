#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int
main ()
{

  double a, c = 0;



  scanf ("%lf", &a);
  if (a >= 100000)
    {
      printf ("Parabens! Venda maior que Cem mil.\n");
      c += 700 + (a * 0.16);
    }
  else
    {
      c += a * 0.14;
      if (c >= 80000)
	c += 650;
      else if (c >= 60000)
	c += 600;
      else if (c >= 40000)
	c += 550;
      else if (c >= 20000)
	c += 500;
      else
	c += 400;

    }

  printf ("A comissao obtida e de RS %.2lf! Parabens!\n", c);




  return 0;



}
