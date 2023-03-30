#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, b, c;
    int opcao;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Você deseja A media: \n(1)Geometrica\n(2)Ponderada\n(3)Harmonica\n(4)Aritmetica\n");
    scanf("%d", &opcao);
    if (opcao == 1){printf("A media Geometrica eh: %lf", pow(a+b+c,1.0/3.0));}
    else if (opcao == 2){printf("A media Ponderada eh: %lf", (a+(b*2)+(c*3))/3);}
    else if (opcao == 3){printf("A media Harmonica eh: %lf", 1/(1/(a+1/b+1/c)));}
    else if (opcao == 4){printf("A media Aritmetica eh: %lf",(a+b+c)/3);}
    else printf("Opcao Invalida!\n");




    return 0;



}
