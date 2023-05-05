#include <stdio.h>
#include <math.h>



int main() {

int A[8];

int i, x, y;

printf("Digite 8 numeros:\n");
for(int i = 0; i<8; i++){
    scanf("%d", &A[i]);
}
printf("Digite duas posicoes para procurar: \n");
scanf("%d %d", &x, &y);
printf("Nas posicoes escolhidas os numeros sao %d %d\n", A[x], A[y]);

return 0;

}
