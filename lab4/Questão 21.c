#include <stdio.h>
#include <stdlib.h>


void linhas(int a)
{
for(int i=1; i<=a; i++){
    for(int j=0; j<i; j++){
        printf("!");
    }
    printf("\n");
}

}

int main()
{
    int a;
    scanf("%d", &a);
    linhas(a);

}

