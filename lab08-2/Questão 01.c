#include <stdio.h>
#include <stdlib.h>

int main()
{
 float a[10], *p=a;

 for(int i = 0; i<10; i++){

    a[i] = 0;
    printf("%d: %p\n", i, p+i);




 }

    return 0;
}
