#include <stdio.h>
#include <stdlib.h>




int counts(int a, int b, int c);
int main()
{
    int h , m, n;
    printf("Digite a hora: \n");
    scanf("%d", &h);
    printf("Digite os minutos: \n");
    scanf("%d", &m);
    printf("Digite os segundos: \n");
    scanf("%d", &n);
    printf("%d segundos", counts(h, m, n));
    return 0;
}


int counts(int a, int b, int c){

int segundos = 0;
segundos += c;
segundos += b*60;
segundos += (a*60)*60;


return segundos;


}


