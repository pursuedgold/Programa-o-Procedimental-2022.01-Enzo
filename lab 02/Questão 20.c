#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int a, b, c;
 scanf("%d %d %d", &a, &b, &c);

 if(a==b && a==c)printf("Triangulo Equilatero");
 else if (a==b || a==c || b==c)printf("Triangulo Isosceles");
 else printf("Triangulo Escaleno");



   return 0;
}
