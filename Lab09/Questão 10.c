#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n = 0, i;
    double *p;

    printf("Quantos espacos voce gostaria de alocar?\n");
    scanf("%d", &n);
    p = (int*) malloc ((n+10)*sizeof(int));

    for(i=0; i<10; i++){
        *(p+i) = (rand()%100);
        printf("%.2lf ", *(p+i));
    }

    free(p);



    return 0;
}
