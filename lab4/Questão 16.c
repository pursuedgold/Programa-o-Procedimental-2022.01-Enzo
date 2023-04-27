#include <stdio.h>
#include <stdlib.h>


void desenha_linha(int a){
for(int i =0; i<a; i++){
    printf("=");
}
}

int main()
{
    int a;
    scanf("%d", &a);
    desenha_linha(a);
    return 0;
}
