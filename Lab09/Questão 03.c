#include <stdio.h>
#include <stdlib.h>

int main() {

int* p, n, pares=0, impares=0;

scanf("%d", &n);

p = (int*) calloc(n, sizeof(int));

for(int i = 0; i<n; i++){
    scanf("%d", p+i);
    switch(*(p+i)%2){
    case 0:
        pares++; break;
    case 1:
        impares++; break;
    }
}
for(int i = 0; i<n; i++){
    printf("%d ", *(p+i));


}
printf("\nPares: %d\nImpares: %d\n ", pares, impares);
free(p);



return 0;
}
