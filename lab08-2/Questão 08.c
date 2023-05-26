#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int A, *B, **C, ***D;
    B = &A;
    C = &B;
    D = &C;

    scanf("%d", B);
    *B *= 2;
    printf("%d\n", *B);
    **C /= 2;
    **C *= 3;
    printf("%d\n", **C);
    ***D /= 3;
    ***D *= 4;
    printf("%d\n", ***D);




    return 0;
}
