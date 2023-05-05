#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int
main () 
{
  
char s1[20], s2[20], saux[20], a, b;
int e, comp, tamanho, i, contador;
s1[0] = 0;
s2[0] = 0;

while(1){
    printf("Escolha uma operacao:\n1.Digitar a string S1 s1\n2.Tamanho da string S1\n3.Comparar S1 com uma outra string\n4.Concatenar S1 com uma outra string\n5. Imprimir S1 invertida\n6. Contar quantas vezes um caracter aparece em S1\n7. Trocar um caracter de S1\n8. Verificar se uma outra string eh substring de S1\n9. Imprimir uma substring de S1\n10. Sair\n");
    scanf("%d", &e);
    setbuf(stdin, NULL);
    if(e == 1){
        setbuf(stdin, NULL);
        fgets(s1, 20, stdin);
    }
    if(e == 2){
        printf("O tamanho de S1 eh: %ld\n", strlen(s1));
    }
    if(e == 3){
        printf("Com qual string você deseja comparar S1?");
        setbuf(stdin, NULL);
        fgets(s2, 20, stdin);
        comp = strcmp(s1, s2);
        if(comp > 1)printf("S1 eh maior do que a string informada!\n");
        else if (comp == 0) printf("Elas sao iguais!\n");
        else printf("S1 eh menor do que a string informada...\n");
    }
    if(e == 4){
        strcpy(saux, s1);
        strcat(saux, s2);
        tamanho = strlen(s1) + strlen(s2);
        if(tamanho >= 20){saux[20] = 0;}
        else saux[tamanho] = 0;
        printf("%s\n", saux);
    }
    if(e == 5){
        for(i = strlen(s1); i>=0; i--){
            printf("%c", s1[i]);
        }
        printf("\n");
        
    }
    if(e == 6){
        contador = 0;
        printf("Qual caracter você deseja contar?\n");
        setbuf(stdin, NULL);
        scanf(" %c", &a);
        for(i=0; i<strlen(s1); i++){
            if (a == s1[i])contador++;
        }
        printf("O caracter %c aparece %d vezes na string!\n", a, contador);
        
        
    }
    if(e == 7){
        printf("Digite o caracter a ser substituido:\n");
        setbuf(stdin, NULL);
        scanf(" %c", &a);
        printf("Digite o caracter a substitui-lo:\n");
        setbuf(stdin, NULL);
        scanf(" %c", &b);
        for(i=0; i<strlen(s1); i++){
            if (s1[i] == a){
                s1[i] = b;
                break;
            }
        }
        
        
    }
    if(e == 8){
        contador = 0;
        printf("Digite o caracter a ser substituido:\n");
        setbuf(stdin, NULL);
        fgets(s2, 20, stdin);
        for(i=0; i<strlen(s1); i++){
            if (s2[i] == s1[i])contador++;
            else contador =0;
            if (contador == strlen(s1)) break;
            
        }
        if(contador == strlen(s1)) printf("Eh substring!\n");
        else printf("Nao eh substring!\n");
        
        
    }
    if(e == 9){
        printf("A partir de qual posicao voce gostaria de comecar?\n");
        scanf("%d", &i);
        printf("Qual o tamanho da substring?\n");
        scanf("%d", &tamanho);
        if(i+tamanho>20)printf("Tamanho invalido!\n");
        else{
            for(i; i<tamanho; i++){
                printf("%c", s1[i]);
            }
            printf("\n");
            
        }
        
        
    }
    
    if(e == 10)break;
    
    
    
}
 
return 0;
    
}
