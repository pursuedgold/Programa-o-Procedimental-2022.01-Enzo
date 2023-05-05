#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i, cont, j;

    printf("Digite 10 valores diferentes:\n");
    scanf("%d", &v[0]);
    for(i = 1; i<10; i++)
    {
        cont = 0;
        scanf("%d", &v[i]);
        for(j = 0; j<i; j++)
        {
            if(v[i]==v[j])
            {
                cont++;
                break;
            }
        }

        if (cont > 0)
        {
            printf("O valor %d ja foi digitado! Digite um valor diferente:\n", v[i]);
            i--;
        }
    }
    printf("Os numeros digitados foram:\n");
    for( i = 0; i<10; i++)
    {
        printf("[%d] ", v[i]);

    }


    return 0;
}
