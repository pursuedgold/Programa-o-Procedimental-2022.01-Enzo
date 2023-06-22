#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n = 0, *p, i = 0;


    p = (int*) calloc (1, sizeof(int));

    while(1){
        scanf("%d", p+i);
        if(*(p+i)<0) break;
        i++;
        p = realloc(p, i*sizeof(int));
    }
    for(int j=0; j<i; j++){
        printf("%d ", *(p+j));

    }


    free(p);



    return 0;
}
