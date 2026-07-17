#include <stdio.h>

int main()
{
    int num1;

    printf("Introduzca el numero a evaluar: ");
    scanf("%i", &num1);

    if (num1 == 0)
    {
        printf("Numero nulo, igual a 0 (cero)");
    }
    else if (num1 > 0)
    {
        printf("El numero es positivo");
    }
    else if (num1 < 0)
    {
        printf("El numero es negativo");
    }
    else
    {
        printf("Se generado un problema en el ingreso");
    }

    return 0;
}
