#include <stdio.h>
#include <stdlib.h>


int fat(int a)
{
    int soma=a;
    a--;
    for (int i = a; i>0; i--){
        soma = soma*i;
    }
        return soma;

}

int main()
{
    int a;
    scanf("%d", &a);
    printf("O fatorial de %d eh %d", a,  fat(a));

}
