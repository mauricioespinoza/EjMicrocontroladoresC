#include <stdio.h>

int main()
{
    int x, suma, numero;

    suma = 0;

    for (x = 1; x <= 10; x++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &numero);

        if (x > 5)
        {
            suma += numero;
        }
    }

    printf("La suma es: %i", suma);

    return 0;
}