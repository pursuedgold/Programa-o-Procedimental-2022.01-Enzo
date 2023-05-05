#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50], aux1, aux2;
    int i;
    fgets(str, 50, stdin);
    printf("Qual a letra deve ser substituida?\n");
    scanf("%c", &aux1);
    
    printf("Qual a letra deve repo-la?\n");
    scanf(" %c", &aux2);
    for(i=0; i<strlen(str); i++){
        if(str[i]==aux1) str[i] = aux2;
        printf("%c", str[i]);

    }
   

    return 0;
}
