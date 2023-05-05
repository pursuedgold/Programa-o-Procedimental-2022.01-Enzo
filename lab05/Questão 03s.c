#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int i;
    fgets(str, 50, stdin);
    for(i=strlen(str); i>=0; i--){
        printf("%c", str[i]);
    }
 

    return 0;
}
