#include <stdio.h>

int main()
{
    int num1;

    printf("Introduzca el numero: ");
    scanf("%i", &num1);

    if (num1 > 999)
    {
        printf("Error: numero mayor a 3 cifras");
    }
    else
    {
        if (num1 >= 100)
        {
            printf("El numero tiene tres cifras");
        }
        else if (num1 >= 10)
        {
            printf("El numero tiene dos cifras");
        }
        else
        {
            printf("El numero tiene una cifra");
        }
    }

    return 0;
}