#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i, j, count;
    printf("Escreva 10 valores:\n");
    for(i =0; i<10; i++)
    {
        scanf("%d", &v[i]);
    }

    i = 0;
    do
    {
        count = 0;
        for(j = 2; j<v[i]; j ++)
        {
            if(v[i]%j==0)
            {
                count++;
                break;
            }

        }
        if (count == 0 && v[i]!=1)
            printf("%d eh primo!, sua posicao eh %d\n", v[i], i);

       i++;
    } while (i<v[i]);


    return 0;
}
