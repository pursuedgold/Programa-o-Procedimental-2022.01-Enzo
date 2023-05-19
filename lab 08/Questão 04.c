#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Insira dois valores:\n");
    scanf("%d %d", &a, &b);
    int *p = &a;
    if(p<&b) p = &b;
    printf("Conteudo do maior endereco: %d\n", *p);


}
