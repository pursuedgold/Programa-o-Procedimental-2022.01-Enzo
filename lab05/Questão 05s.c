#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int i;
    fgets(str, 50, stdin);
    for(i=0; i<strlen(str); i++){
        if(str[i]>= 65 && str[i]<=90) str[i]+=32;
         
        printf("%c", str[i]);
    }
 

    return 0;
}
