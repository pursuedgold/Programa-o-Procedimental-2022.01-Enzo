#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

int n, *p;

scanf("%d", &n);

p = (int*) calloc(n+1, sizeof(int));

for(int i = 0; i<n; i++){
    scanf("%d", p+i);
}
printf("Digite o numero a ser comparado:\n");
scanf("%d", p+n);
for(int i = 0; i<n; i++){
    if(*(p+i)%*(p+n) == 0) printf("%d ", *(p+i));
}
free(p);



return 0;
}
