#include <stdio.h>
#include <stdlib.h>




int dobro(int a);
int main()
{
    int x;

    scanf("%d", &x);
    x = dobro(x);
    printf ("O dobro eh: %d", x);
    return 0;
}


int dobro(int a){

int d;
d = a*2;
return d;

}
