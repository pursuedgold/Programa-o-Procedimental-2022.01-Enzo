#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[10], *p = a, *pmax = a, *pmin = a;

    for(int i=0; i<10; i++){
        scanf("%d", p+i);

        if(*(p+i) > *pmax) pmax = p+i;
        if(*(p+i) < *pmin) pmin = p+i;

    }
    printf("O maior valor eh %d\nO menor valor eh %d", *pmax, *pmin);


    return 0;
}
