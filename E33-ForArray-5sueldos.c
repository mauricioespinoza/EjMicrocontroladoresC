#include <stdio.h>

int main()
{
    int f;
    int sueldos[5]; // Vector de 5 enteros

    // Carga del vector
    for (f = 0; f < 5; f++)
    {
        printf("Ingrese sueldo %i: ", f + 1);
        scanf("%i", &sueldos[f]);
    }

    // Impresión del vector
    printf("\nListado de sueldos:\n");

    for (f = 0; f < 5; f++)
    {
        printf("sueldos[%i] = %i\n", f, sueldos[f]);
    }

    return 0;
}