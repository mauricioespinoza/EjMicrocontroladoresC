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
    if (num1 < 10 && num2 < 10 && num3 < 10)
    {
        printf("Todos los numeros ingresados son menores a 10");
    }
    else
    {
        printf("Algunos de los numeros ingresados NO son menores a 10");
    }
    return 0;
}