#include <stdio.h>
#include <stdlib.h>

int main() {

int* p, n;

scanf("%d", &n);

p = (int*) calloc(n, sizeof(int));

for(int i = 0; i<n; i++){
    scanf("%d", p+i);
}
for(int i = 0; i<n; i++){
    printf("%d ", *(p+i));
}
free(p);



return 0;
}
