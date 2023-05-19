#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[6], *p = &a;
   printf("Insira 06 valores:\n");
   scanf("%d %d %d %d %d %d", p, p+1, p+2, p+3, p+4, p+5);
   printf("%d, endereco de memoria %p\n%d, endereco de memoria %p\n%d, endereco de memoria %p\n%d, endereco de memoria %p\n%d, endereco de memoria %p\n%d, endereco de memoria %p\n", *p, p, *(p+1), p+1, *(p+2), p+2, *(p+3), p+3, *(p+4), p+4, *(p+5), p+5);
}
