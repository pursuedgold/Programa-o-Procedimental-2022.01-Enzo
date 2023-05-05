#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int i, cont=0;
    fgets(str, 50, stdin);
    for(i=0; i<strlen(str); i++){
        if(str[i]=='1')cont ++;
       
    }
    printf("%d", cont);

    return 0;
}
