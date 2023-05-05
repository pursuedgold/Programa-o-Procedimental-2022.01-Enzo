#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[6], i, somap=0, conti=0;

    scanf("Digite 06 valores:\n");
    for(i = 0; i<6; i++){
        scanf("%d", &v[i]);
        if (v[i]%2==0) {somap+=v[i]; printf("%d eh par!\n", v[i]);}
        else {conti++; printf("%d eh impar!\n", v[i]);}
    }
    printf("Foram digitados %d numeros impares\nA soma dos numeros pares eh %d\n", conti, somap);


    return 0;
}
