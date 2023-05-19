#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, *p = &a, *p2 = &b;;
    printf("Insira dois valores:\n");
    scanf("%d %d", p, p2);

    printf("Soma dos dois numeros: %d\nSubtracao  dos dois numeros: %d\nMultiplicacao dos dois numeros: %d\nDivisao do dois numeros: %d\n", *p+*p2, *p-*p2, *p**p2, *p/ *p2);


}
