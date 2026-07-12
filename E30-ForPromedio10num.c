#include <stdio.h>

int main()
{
    int suma, f, valor, promedio;

    suma = 0;

    for (f = 1; f <= 10; f++)
    {
        printf("Ingrese valor %i: ", f);
        scanf("%i", &valor);

        suma = suma + valor;
    }

    printf("La suma es: %i\n", suma);

    promedio = suma / 10;

    printf("El promedio es: %i", promedio);

    return 0;
}