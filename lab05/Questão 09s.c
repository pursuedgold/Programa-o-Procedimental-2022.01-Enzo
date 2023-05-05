#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[5][50];
    int i, consumo[5], menor, menorpos=0;
    
    
    for(i=0; i<5; i++){
        printf("Qual o modelo do carro?\n");
        fgets(str[i], 50, stdin);
        printf("Qual seu consumo?\n");
        scanf("%d", &consumo[i]);
        setbuf(stdin, NULL);
        if(i==0)menor = consumo[i];
        else if(menor>consumo[i]){menor = consumo[i];menorpos = i;}
    }
    printf("*****\n\nO carro com menor consumo eh: %s\n\n*****", str[menorpos]);
    for(i=0; i<5; i++){
        printf("\nO carro %s consome %d litros para percorrer 1.000 KM\n", str[i], 1000/consumo[i]);
    }
   

    return 0;
}
