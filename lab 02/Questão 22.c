#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, b;



    scanf("%d %d", &a, &b);
    if (a>=65 || b>=30)printf("Pode se aposentar\n");
    else if (a>=60 && b>=25) printf("Pode se aposentar\n");
    else printf("Nao pode se aposentar\n");


    return 0;



}
