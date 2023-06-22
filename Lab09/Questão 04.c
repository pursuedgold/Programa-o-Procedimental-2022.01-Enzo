#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

int n;
char* p;

scanf("%d", &n);

p = (char*) calloc(n, sizeof(char));

fgetc(stdin);
fgets(p, n, stdin);

for(int i = 0; i<n; i++){
    if(*(p+i) != 'a' && *(p+i) != 'e' && *(p+i) != 'i' &&  *(p+i) != 'o' && *(p+i) != 'u' && *(p+i) != 'A' && *(p+i) != 'E' && *(p+i) != 'I' &&  *(p+i) != 'O' && *(p+i) != 'U')
        printf("%c", *(p+i));
}
free(p);



return 0;
}
