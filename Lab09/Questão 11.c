#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alunos{
char matricula[20], sobrenome[20], ano[5];
};

typedef struct alunos alunos;

int main()
{

    int n = 0, i;
    alunos *p;

    printf("Quantos alunos voce gostaria de registrar?\n");
    scanf("%d", &n);
    p = (alunos*) calloc(n, sizeof(alunos));

    for(i=0; i<n; i++){
       printf("Insira número de matricula:\n");
       scanf("%s", &(p+i)->matricula);
       printf("Insira sobrenome:\n");
       scanf("%s", &(p+i)->sobrenome);
       printf("Insira ano de nascimento:\n");
       scanf("%s", &(p+i)->ano);
    }
    for(i=0; i<n; i++){
       printf("número de matricula: %s\n", (p+i)->matricula);
       printf("sobrenome: %s\n", (p+i)->sobrenome);
       printf("ano de nascimento: %s\n", (p+i)->ano);
    }


    free(p);



    return 0;
}
