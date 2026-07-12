#include <stdio.h>

int main()
{
    int suma = 0, valor;
    char continua;

    do
    {
        printf("Ingrese un valor entero: ");
        scanf("%i", &valor);

        suma += valor;

        printf("Desea cargar otro valor [s/n]: ");
        scanf(" %c", &continua); // Espacio antes de %c evita capturar Enter

    } while (continua == 's');

    printf("La suma de todos los valores es: %i\n", suma);

    return 0;
}