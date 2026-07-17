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
    if (num1 < 10 || num2 < 10 || num3 < 10)
    {
        printf("Alguno de los números es menor a diez");
    }
    else
    {
        printf("Ninguno de los numeros ingresados son menores a 10");
    }
    return 0;
}