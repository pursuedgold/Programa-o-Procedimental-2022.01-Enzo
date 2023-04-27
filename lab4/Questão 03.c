#include <stdio.h>
#include <stdlib.h>




int sinal(int a);
int main()
{
    int x;
    printf("Digite o numero: \n");
    scanf("%d", &x);
    printf("%d", sinal(x));
    return 0;
}


int sinal(int a){

int b;
if ( a>0) b=1;
else if (a<0) b=-1;
else b=0;
return b;

}


