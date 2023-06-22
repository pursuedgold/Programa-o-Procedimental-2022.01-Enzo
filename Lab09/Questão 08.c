#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n = 0, *p, i;


    p = (int*) calloc (1500, sizeof(int));
    for(i=0; i<1500; i++){
        if(*(p+i)!= 0) {printf("ERROR"); exit(1);}
        *(p+i) = i;
    }
    for(i=0; i<10; i++){
        printf("%d ", *(p+i));

    }
    for(i=1499; i>1488; i--){
        printf("%d ", *(p+i));
    }


    free(p);



    return 0;
}
