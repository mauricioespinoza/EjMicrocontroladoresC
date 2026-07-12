#include <stdio.h>
int main()
{
    float lado, superficie;
    printf(" Introduzca el lado del cuadrado: \n");
    scanf("%f", &lado);
    superficie = lado * lado;
    printf("La superficie del cuadrado es: %.2f", superficie);
    return 0;
    }