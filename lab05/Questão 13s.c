#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], straux[100], strauxx[100];
    int i, j=0, aux;
    
    fgets(strauxx, 100, stdin);
    for(i=0; i<strlen(strauxx); i++){
        if(strauxx[i]!=32){
            str[j] = strauxx[i];
            j++;
        }
    }
    str[j-1] = 0;
    aux = j;
    j=0;
    for(i=aux-2; i>=0; i--){
        straux[j] = str[i];
        j++;
    }

    straux[j] = 0;
    printf("%s\n", straux);
    if(strcmp(str, straux)==0) printf("Eh palindromo\n");
    else printf("Nao eh palindromo\n");


    return 0;
}