#include <stdio.h>
#include <math.h>



int main() {

int A[50];

int i;


for(i = 0; i<6; i++){
    A[i] = ((i+5)*i)%(i+1);
    printf("A[%d] = %d\n", i, A[i]);
}


return 0;

}
