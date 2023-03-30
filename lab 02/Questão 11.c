#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int b, a, soma=0;
    scanf("%d", &b);
    if(b>0){
    while(b!=0){
        a=b%10;
        soma+= a;
        b=b/10;

    }
     printf("A soma dos digitos do numero eh %d\n", soma);

    } else printf("Numero Invalido\n");


    return 0;



}
