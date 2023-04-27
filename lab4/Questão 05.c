#include <stdio.h>
#include <stdlib.h>




double vesfera(double a);
int main()
{
    double x;
    printf("Digite o raio: \n");
    scanf("%lf", &x);
    printf("O volume eh: %lf", vesfera(x));
    return 0;
}


double vesfera(double a){

double volume;
volume = ((4/3)*3.14159)*(a*a*a);

return volume;


}


