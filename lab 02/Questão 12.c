#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int b;
    scanf("%d", &b);
    if (b<0)printf("Numero Invalido");
    else printf("O logaritimo deste numero eh %lf\n", log(b));
    return 0;



}
