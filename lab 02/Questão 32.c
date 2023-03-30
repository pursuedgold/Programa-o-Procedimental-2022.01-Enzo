#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int opcao;
    double quantidade, valor;
    scanf("%d %lf", &opcao, &quantidade);
    switch(opcao){

    case 100 : valor = quantidade*1.20; break;
    case 101 : valor = quantidade*1.30; break;
    case 102 : valor = quantidade*1.50; break;
    case 103 : valor = quantidade*1.20; break;
    case 104 : valor = quantidade*1.70; break;
    case 105 : valor = quantidade*2.20; break;
    case 106 : valor = quantidade*1.00; break;

    }
    printf("O valor a ser pago eh R$ %lf", valor);






    return 0;



}

