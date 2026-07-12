#include <stdio.h>

int main()
{
    int x, valor, suma;
    float promedio;

    x = 1;
    suma = 0;

    while (x <= 10)    // Repetir 10 veces
    {
        printf("Ingrese el valor %i: ", x);
        scanf("%i", &valor);

        suma += valor; // Acumular suma
        x++;
    }

    promedio = (float)suma / 10;

    printf("\nLa suma es: %i\n", suma);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}