#include <stdio.h>
#include <stdlib.h>


int soma(int a, int b)
{
    int soma=0;
    if(a>b)
    {
        for(int i=b+1 ; i<a; i++)
        {

            soma+=i;
        }
    } else for(int i =a+1 ; i<b; i++)
        {
            soma+=i;
        }
        return soma;

}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("A soma dos numeros entre eles eh %d", soma(a, b));

}
