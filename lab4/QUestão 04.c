#include <stdio.h>
#include <stdlib.h>




void quadradop(a);
int main()
{
    int x;
    printf("Digite o numero: \n");
    scanf("%d", &x);
    quadradop(x);
    return 0;
}


void quadradop(a){

int x;
float y;
x=sqrt(a);
y = sqrt(a);
if (x==y)printf("Eh quadrado perfeito");
else printf("Nao eh quadrado perfeito");


}


