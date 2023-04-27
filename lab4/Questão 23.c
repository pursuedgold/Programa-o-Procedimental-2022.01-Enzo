#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void triangulo(int n){

int i, j, k;

for ( i = 1 ; i<=n; i++){
    for(j=0; j<i; j++){
        printf("*");
    }


    printf("\n");
}
for ( i = n ; i>0; i--){
    for(j=0; j<i; j++){
        printf("*");
    }


    printf("\n");
}


}







int main(){

int n;
scanf("%d", &n );
triangulo(n);



return 0;
}
