#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    double valor;
    
    fgets(str, 50, stdin);
    scanf("%lf", &valor);
    printf("Mercadoria: %s\nValor total: R$%.2lf\nDesconto a vista: R$%.2lf\nValor a vista: R$%.2lf", str, valor, valor*0.10, valor*0.9);

    return 0;
}

