#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, contador=0;
    printf("Qual a soma de 23+42?\n");
    scanf("%d", &a);
    if(a==65){printf("Resultado Correto! Muito bem!\n");
    contador++;}
    else printf("Resposta Incorreta. O resultado eh 65\n");


    printf("Qual a soma de 10+10?\n");
    scanf("%d", &a);
    if(a==20){printf("Resultado Correto! Muito bem!\n");
    contador++;}
    else printf("Resposta Incorreta. O resultado eh 20\n");


    printf("Qual a soma de 32+24?\n");
    scanf("%d", &a);
    if(a==56){printf("Resultado Correto! Muito bem!\n");
    contador++;}
    else printf("Resposta Incorreta. O resultado eh 56\n");


    printf("Qual a soma de 45+42?\n");
    scanf("%d", &a);
    if(a==87){printf("Resultado Correto! Muito bem!\n");
    contador++;}
    else printf("Resposta Incorreta. O resultado eh 87\n");


    printf("Qual a soma de 23+49?\n");
    scanf("%d", &a);
    if(a==72){printf("Resultado Correto! Muito bem!\n");
    contador++;}
    else printf("Resposta Incorreta. O resultado eh 72\n");

    printf("Voce acertou um total de %d Questoes!\n", contador);






    return 0;



}
