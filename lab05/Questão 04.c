#include <stdio.h>
#include <math.h>



int main() {

int A[6];

int i, maior, menor, posmenor=0, posmaior=0;

printf("Digite 6 numeros:\n");
scanf("%d", &A[0]);
maior = A[0];
menor = maior;
for(i = 1; i<6; i++){
    scanf("%d", &A[i]);
    if(A[i]>maior) {maior = A[i]; posmaior = i;}
    else if (A[i]<menor) {menor = A[i]; posmenor = i;}
}
printf("A posicao do maior numero eh: %d\nA posicao do menor numero eh: %d", posmaior, posmenor);



return 0;

}
