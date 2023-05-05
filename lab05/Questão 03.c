#include <stdio.h>
#include <math.h>



int main() {

int A[6];

int i;

printf("Digite 6 numeros:\n");
for(i = 0; i<6; i++){
    scanf("%d", &A[i]);
}
for(i=i-1; i>=0; i--){
    printf("%d ", A[i]);
}



return 0;

}
