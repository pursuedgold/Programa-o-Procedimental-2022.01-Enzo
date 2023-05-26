#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[5], *p=a;

 for(int i = 0; i<5; i++){
    scanf("%d", p+i);

 }
 for(int i = 0; i<5; i++){
    if((*(p+i))%2==0)
    printf("%p\n", p+i);

 }


    return 0;
}
