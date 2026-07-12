#include <stdio.h>

int main()
{
    int f, may = 0, men = 0;
    float alturas[5], suma = 0, promedio;

    // Carga del vector
    for (f = 0; f < 5; f++)
    {
        printf("Ingrese altura de la persona %i: ", f + 1);
        scanf("%f", &alturas[f]);
    }

    // Cálculo del promedio
    for (f = 0; f < 5; f++)
    {
        suma += alturas[f];
    }

    promedio = suma / 5;

    printf("Promedio de alturas: %.2f m\n", promedio);

    // Comparación con el promedio
    for (f = 0; f < 5; f++)
    {
        if (alturas[f] > promedio)
            may++;
        else if (alturas[f] < promedio)
            men++;
    }

    printf("Mayores al promedio: %i\n", may);
    printf("Menores al promedio: %i\n", men);

    return 0;
}