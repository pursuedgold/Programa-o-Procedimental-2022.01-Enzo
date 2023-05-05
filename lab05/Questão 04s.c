#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50], aux;
    int i;
    fgets(str, 50, stdin);
    printf("Digite qual caracter voce deseja colocar no lugar das vogais:\n");
    scanf("%c", &aux);
    for(i=0; i<strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'I' || str[i] == 'i' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') printf("%c", aux);
        else 
        printf("%c", str[i]);
    }
 

    return 0;
}
