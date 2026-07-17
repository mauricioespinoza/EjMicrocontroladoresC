#include <stdio.h>

int main()
{
    int num1;

    printf("Introduzca el numero: ");
    scanf("%i", &num1);

    if (num1 <= 0)
    {
        printf("Error: Debe ingresar una cifra comprendida como número positivo");
    }
    else if (num1 >= 1 && num1 <= 9)
    {
        printf("El numero tiene 1 cifras");
    }
    else if (num1 >= 10 && num1 <= 99)
    {
        printf("El numero tiene 2 cifras");
    }
    else
    {
        printf("El numero tiene mas de 2 cifras");
    }

    return 0;
}
