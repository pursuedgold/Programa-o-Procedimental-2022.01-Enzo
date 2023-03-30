#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, b, c;
    do{

    printf("Escolha uma das opcoes abaixo: \n(1)Adicao\n(2)Subtracao\n(3)Multiplicacao\n(4)Divisao\n");
    scanf("%lf", &a);
    if (a<1 || a>4)printf("Opcao Invalida!\n");
    }while (a<1 || a>4);

    if(a==1){printf("Digite os valores para a operacao!\n"); scanf("%lf %lf", &b, &c); printf("O resultado eh: %lf\n", b+c);}
    else if(a==2){printf("Digite os valores para a operacao!\n"); scanf("%lf %lf", &b, &c); printf("O resultado eh: %lf\n", b-c);}
    else if(a==3){printf("Digite os valores para a operacao!\n"); scanf("%lf %lf", &b, &c); printf("O resultado eh: %lf\n", b*c);}
    else if(a==4){printf("Digite os valores para a operacao!\n"); scanf("%lf %lf", &b, &c); printf("O resultado eh: %lf\n", b/c);}





    return 0;



}
