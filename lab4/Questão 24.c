#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void triangulo(int n){

int i, j, k, aux, metade;
metade = n-1;


for ( i = 0; i<n; i++){
        aux = metade - i;

    for(aux; aux>0; aux--){
        printf(" ");
    }
    j = (i*2)+1;
    for(k=0; k<j; k++){
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
