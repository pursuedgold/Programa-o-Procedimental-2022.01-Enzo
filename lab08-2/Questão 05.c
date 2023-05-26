#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[30], b[20], *p=a, *p1=b;
    int aux = 0, j = 0;

    setbuf(stdin, NULL);
    fgets(a, 30, stdin);
    setbuf(stdin, NULL);
    fgets(b, 20, stdin);
    for(int i = 0; i<strlen(a); i++)
    {

        if(*(p+i) == *(p1+j))
        {
            aux++;
            j++;
        }
        else
        {
            aux = 0;
            j=0;

        }

        if (aux == strlen(b)-1)
            break;


    }

    if(aux >= 1)
        printf("Esta contida!\n");
    else
        printf("Nao esta contida\n");



    return 0;
}
