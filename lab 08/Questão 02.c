#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *a1 = &a;
    float b, *b1=&b;
    char c, *c1=&c;
    *a1 = 10;
    *b1 = 20.23;
    *c1 = 't';
    printf("%d %f %c", a, b, c);




    return 0;
}
