#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void soma(int a){
int b, soma=0;

if (a < 0 ) printf("numero invalido!\n");
else {
do{
    b = a%10;
    soma += b;
    a=a/10;


}while (a!=0);

printf("A soma dos algarismos eh: %d", soma);

}

}






int main(){

int a;
scanf("%d", &a);
soma(a);











return 0;
}
