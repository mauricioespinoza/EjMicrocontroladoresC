#include <stdio.h>
int main()
{
    float num1, num2, num3, promedio;
    printf(" Introduzca la primera nota:");
    scanf("%f", &num1);
    printf(" Introduzca la segunda nota:");
    scanf("%f", &num2);
    printf(" Introduzca la tercera nota:");
    scanf("%f", &num3);
    promedio = (num1 + num2 + num3) / 3;
    if (promedio >= 7)
    {
        printf("Promocionado");
    }
    else
    {
        if (promedio >= 4 && promedio < 7)
        {
            printf("Regular");
        }
        else
        {
            printf("Reprobado");
        }
    }
    return 0;
}