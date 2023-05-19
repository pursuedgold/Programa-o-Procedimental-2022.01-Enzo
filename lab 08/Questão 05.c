#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Insira dois valores:\n");
    scanf("%d %d", &a, &b);
    int *p = &a, *p2 = &b;

    *p = ((*p)*2);
    *p2 = ((*p2)*2);
    printf("Soma do dobro dos dois numeros: %d\n", *p+*p2);


}
