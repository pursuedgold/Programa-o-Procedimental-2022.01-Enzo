#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], straux[100];
    int i;
    
    fgets(str, 100, stdin);
    for(i=0; i<strlen(str)-1; i++){
        if (str[i] == 32)printf(" ");
        else
         printf("%c", str[i] - 29);
      
    }


    return 0;
}


