#include <stdio.h>
#include <stdlib.h>


int exp(int a, int b)
{
    int soma=a;
    for (int i = 1; i<b; i++){
        soma = soma*a;
    }
        return soma;

}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("A soma dos numeros entre eles eh %d", exp(a, b));

}
