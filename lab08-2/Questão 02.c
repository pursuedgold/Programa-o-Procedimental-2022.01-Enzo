#include <stdio.h>
#include <stdlib.h>

int main()
{
 float a[3][3], *p=a;

 for(int i = 0; i<9; i++){


    printf("%d: %p\n", i+1, p+i);




 }

    return 0;
}
