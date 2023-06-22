#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n = 0, *p;
    int nums[6], numj[6];
    int v=0;

    for(int i = 0; i<6; i++)
    {
        scanf("%d", nums+i);
    }
    for(int i = 0; i<6; i++)
    {
        scanf("%d", numj+i);
        for(int j=0; j<6; j++)
        {
            if(*(numj+i) == *(nums+j)) n++;
        }
    }
    p = (int*) calloc(n, sizeof(int));

    for(int i = 0; i<6; i++)
    {

        for(int j=0; j<6; j++)
        {
            if(*(nums+j) == *(numj+i))
            {
                *(p+v) = *(numj+i);
                v++;
            }
        }
    }

    for(int i = 0; i<6; i++)
    {
        printf("%d ", *(nums+i));

    }
    printf("\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", *(p+i));

    }



    free(p);



    return 0;
}
