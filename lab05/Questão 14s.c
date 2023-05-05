#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[200], str2[100];
    int n;
    
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    str1[strlen(str1)-1] = 0;
    
    scanf("%d", &n);
    str2[n] = 0;
    
    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}
