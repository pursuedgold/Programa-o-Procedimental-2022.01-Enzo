#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5][5], i, j;


    for(i = 0; i<5; i++)
    {

        for(j = 0; j<5; j++)
        {


            if(i==j) v[i][j] = 1;
            else v[i][j] = 0;

        }


    }

    for(i = 0; i<5; i++)
    {

        for(j = 0; j<5; j++)
        {

        printf("[%d]", v[i][j]);


        }
    printf("\n");

    }


    return 0;
}
