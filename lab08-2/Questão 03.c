#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[5], *p=a;

 for(int i = 0; i<5; i++){
    scanf("%d", p+i);

 }
 for(int i = 0; i<5; i++){
    printf("%d\n", (*(p+i))*2);

 }


    return 0;
}
