#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

int n, *p, aux, i;
char opcao;

scanf("%d", &n);

p = (int*) calloc(n, sizeof(int));

fgetc(stdin);
while(1){

    printf("Selecione uma opcao:\n1. Verificar num em determinado slot\n2. Inserir novo valor em um slot\n3. Sair\n");
    scanf("%c", &opcao);
    if(opcao == '1'){
        printf("Qual slot a ser consultado?\n");
        scanf("%d", &i);
        printf("%d\n", *(p+i));
    }
    else if(opcao == '2'){
        printf("Qual slot a ser alterado?\n");
        scanf("%d", &i);
        printf("Insira seu novo valor:\n", *(p+i));
        scanf("%d", &aux);
        *(p+i) = aux;
    }
    else if(opcao == '3')exit(1);
    else printf("Opcao invalida!\n");
    fgetc(stdin);
}

free(p);



return 0;
}
