#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf("O maior numero eh %d\n", a);
        printf("A diferenca entre eles eh %d", a-b);
    }
    else
    {
        printf("O maior numero eh %d\n", b);
        printf("A diferenca entre eles eh %d",b-a);
    }



    return 0;



}
