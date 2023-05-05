#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50], straux[50];
    int i, j=0;;
    fgets(str, 50, stdin);
    for(i=0; i<strlen(str); i++){
        if(str[i]!= 32) {straux[j]=str[i]; j++;}

    }
    straux[j+1] = 0;
     printf("%s", straux);
 

    return 0;
}
