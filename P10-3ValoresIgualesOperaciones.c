#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf(" Introduzca el primer valor: ");
    scanf("%i", &num1);
    printf(" Introduzca el segundo valor: ");
    scanf("%i", &num2);
    printf(" Introduzca el tercer valor: ");
    scanf("%i", &num3);
    if (num1 == num2 && num2 == num3)
    {
        printf("Dado que los valores son iguales se procede a calcular (%i * %i) + %i = %i", num1, num2, num3, (num1*num2)+num3);
    }
    else
    {
        printf("Las cifras no son iguales");
    }
    return 0;
}