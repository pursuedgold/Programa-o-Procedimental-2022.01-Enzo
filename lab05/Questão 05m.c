#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int v[10][10], i, j;
   for(i=0; i<10; i++){

        for(j=0; j<10; j++){
            if (i==j)
                v[i][j] = (3*pow(i, 2)) - 1;
            else if ( i> j )
                v[i][j] = 4*pow(i, 3) - (5*pow(j, 2)) +1;
            else v[i][j] = (2*i) + (7*j) - 2;
            printf("[%d] ", v[i][j]);
        }
    printf("\n");

}
}
