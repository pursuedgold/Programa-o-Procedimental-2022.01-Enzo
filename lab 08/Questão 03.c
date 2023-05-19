#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, *p = &a;
    if(p<&b) p = &b;
    printf("%p\n", p);


}
