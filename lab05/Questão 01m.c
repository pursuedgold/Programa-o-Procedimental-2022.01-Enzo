#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[4][4], i, cont = 0, j;

    printf("Digite 16 valores:\n");

    for(i = 0; i<4; i++)
    {

        for(j = 0; j<4; j++)
        {
            scanf("%d", &v[i][j]);

            if(v[i][j] > 10)
            cont++;


        }


    }
    printf("Existem %d numeros maiores que 10 nessa matriz:\n", cont);
    for( i = 0; i<10; i++)



    return 0;
}
