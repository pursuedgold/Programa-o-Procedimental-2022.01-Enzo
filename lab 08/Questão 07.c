#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, *p = &a, *p2 = &b, *p3 = &c;
    printf("Insira tres valores:\n");
    scanf("%d %d %d", p, p2, p3);
         if(*p <= *p2 && *p2 <= *p3)printf("%d %d %d\n%p %p %p", *p, *p2, *p3, p, p2, p3);
    else if(*p2 <= *p && *p <= *p3)printf("%d %d %d\n%p %p %p", *p2, *p, *p3, p2, p, p3);
    else if(*p3 <= *p && *p <= *p2)printf("%d %d %d\n%p %p %p", *p3, *p, *p2, p3, p, p2);
    else if(*p <=*p3 && *p3 <= *p2)printf("%d %d %d\n%p %p %p", *p, *p3, *p2, p, p3, p2);
    else if(*p2 <= *p3 && *p3 <= *p)printf("%d %d %d\n%p %p %p", *p2, *p3, *p, p2, p3, p);
    else if(*p3 <= *p2 && *p2 <= *p)printf("%d %d %d\n%p %p %p", *p3, *p2, *p, p3, p2, p);

    return 0;
}
