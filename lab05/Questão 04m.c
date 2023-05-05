#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5][5], i, j, x, y, num, count = 0;



    for(i = 0; i<5; i++)
    {

        for(j = 0; j<5; j++)
        {
            scanf("%d", &v[i][j]);

        }
    }
    printf("Digite o valor X: \n");
     scanf("%d", &num);

    for(i = 0; i<5; i++)
    {

        for(j = 0; j<5; j++)
        {
            if(num==v[i][j]){
            printf("Valor X encontrado na posicao [%d][%d]\n", i, j);
            count++;
            }

        }

    }
    if(count == 0 ) printf("Valor X nao encontrado...\n");


    return 0;
}
