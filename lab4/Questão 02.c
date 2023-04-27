#include <stdio.h>
#include <stdlib.h>




void data(int a, int b, int c);
int main()
{
    int x, y, z;
    printf("Digite o dia: \n");
    scanf("%d", &x);
    printf("Digite o mes: \n");
    scanf("%d", &y);
    printf("Digite o ano: \n");
    scanf("%d", &z);
    data(x,y,z);
    return 0;
}


void data(int a, int b, int c){

printf("%d de ", a);
switch (b){

case 1: printf("janeiro de %d", c); break;
case 2: printf("fevereiro de %d", c); break;
case 3: printf("merco de %d", c); break;
case 4: printf("abril de %d", c); break;
case 5: printf("maio de %d", c); break;
case 6: printf("junho de %d", c); break;
case 7: printf("julho de %d", c); break;
case 8: printf("agosto de %d", c); break;
case 9: printf("setembro de %d", c); break;
case 10: printf("outubro de %d", c); break;
case 11: printf("novembro de %d", c); break;
case 12: printf("dezembro de %d", c); break;

}

}
