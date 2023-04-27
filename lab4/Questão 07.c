#include <stdio.h>
#include <stdlib.h>




float conversor(float a);
int main()
{
    float temp;
    printf("Digite a temperatura: \n");
    scanf("%f", &temp);
    printf("A temperatura em fahrenheit eh: %f", conversor(temp));
    return 0;
}


float conversor(float a){

int f;
f = a*(9/5)+32;
return f;


}


