#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a;
    char b, c;



    scanf("%lf %c %c", &a, &b, &c);
    
    if ((b == 'M' && c=='G')|| (b =='m' && c=='g' )|| (b =='M' && c=='g' )|| (b =='m' && c == 'G')) printf("O valor apos o imposto eh: RS%.2lf\n", a*1.07);
    else if ((b=='M' && c=='S') || (b=='m' && c=='s' )|| (b=='M' && c=='s') || (b=='m' && c=='S')) printf("O valor apos o imposto eh: RS%.2lf\n", a*1.08);
    else if ((b=='S' && c=='P') || (b=='s' && c=='p') || (b=='S' && c=='p') || (b=='s' && c=='P')) printf("O valor apos o imposto eh: RS%.2lf\n", a*1.12);
    else if ((b=='R' && c=='J') || (b=='r' && c=='j') || (b=='R' && c=='j') || (b=='r' && c=='J')) printf("O valor apos o imposto eh: RS%lf\n", a*1.15);
    else printf("Estado Invalido!\n");



    return 0;



}