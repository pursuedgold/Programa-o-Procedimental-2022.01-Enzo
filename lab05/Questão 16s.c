#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int
main () 
{
  
char s1[10000], s2[6];
s2[5] = 0;
int i, j, soma = 1, maiorsoma = 0;

scanf("%s", s1);

for ( i=0; i<strlen(s1); i++){
    soma = 1;
    for (j=i; j<i+5; j++){
        soma*= s1[j]-48;
    }
    if(soma > maiorsoma){
        maiorsoma = soma;
        s2[0] = s1[i];
        s2[1] = s1[i+1];
        s2[2] = s1[i+2];
        s2[3] = s1[i+3];
        s2[4] = s1[i+4];
    }
    
}
printf("O maior produto foi %d!\nSua sequencia de numeros eh %s\n", maiorsoma, s2);

 
return 0;
    
}
