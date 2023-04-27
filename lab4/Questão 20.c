#include <stdio.h>
#include <stdlib.h>


int primo(int a)
{
  int i, raiz;
    int aux=a-1;
    int soma=0;
    int count=0;

for(aux; aux>7; aux--){
  for(i = 2; i<aux; i ++)
  {
    if(aux%i==0) {
            count++;
            break;
    }
}
  if (count==0) soma++;
  count=0;
}
soma += 4;

return soma;

}

int main()
{
    int a;
    scanf("%d", &a);
    printf("Os numeros abaixo de %d primos sao %d", a,  primo(a));

}
