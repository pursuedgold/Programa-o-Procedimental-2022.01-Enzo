
#include <stdio.h>

double operacao(double a, double b, char c){
    if(c=='*')return a*b;
    else if(c=='/') return a/b;
    else if(c=='+') return a+b;
    else if(c=='-') return a-b;
    else return 0;
    
}



int main()
{
    double a, b;
    char c;
    scanf("%lf %lf \n%c", &a, &b, &c);
    printf("O resultado eh %lf", operacao(a, b, c));

    return 0;
}
