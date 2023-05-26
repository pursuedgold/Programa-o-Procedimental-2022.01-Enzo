#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[10], *p = a, valor;
    scanf("%d", &valor);
    for(int i=0; i<10; i++){
        *(p+i) = valor;
        printf("%d\n", *(p+i));

    }


    return 0;
}
