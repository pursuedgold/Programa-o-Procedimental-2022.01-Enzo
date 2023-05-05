#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[4][4], i, j, maiorx = 0, maiory = 0, maior;


    for(i = 0; i<4; i++)
    {

        for(j = 0; j<4; j++)
        {
            scanf("%d", &v[i][j]);


            if(i==j && i==0)
                maior  = v[i][j];
            else if(v[i][j]>maior){
                maior = v[i][j];
                maiorx = i;
                maiory = j;
                }

        }
    }

    for(i = 0; i<4; i++)
    {

        for(j = 0; j<4; j++)
        {

            printf("[%d]", v[i][j]);

        }
        printf("\n");

    }
    printf("O maior valor eh %d, sua posicao eh [%d] [%d] \n", maior, maiorx, maiory);


    return 0;
}
