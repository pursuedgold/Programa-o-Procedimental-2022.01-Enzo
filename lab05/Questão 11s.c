#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int i, j;
    
    fgets(str, 50, stdin);
    scanf("%i %i", &i, &j);
    for(i; i<=j; i++){
        printf("%c", str[i]);
    }

    return 0;
}

