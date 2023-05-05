#include <time.h> 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5], i, j, aux1, aux2, cont;
    
    srand(time(NULL));
    printf("Cartela de bingo:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cont = 0;
            m[i][j] = rand()%100;
          for(aux1=0; aux1<i; aux1++){
              for(aux2=0; aux2<j; aux2++){
                  if(m[i][j] == m[aux1][aux2]){
                      cont ++; 
                      j--;
                      break;
                  }
                  
              }
              if(cont > 0)break;
              
              
          }
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
