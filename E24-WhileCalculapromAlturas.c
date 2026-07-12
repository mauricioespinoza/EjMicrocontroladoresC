#include <stdio.h>

int main()
{
    int x, numeroAlturas;
    float alturas, promedio;

    x = 1;
    promedio = 0;

    printf("Ingrese numero de alturas: ");
    scanf("%i", &numeroAlturas);

    while (x <= numeroAlturas)
    {
        printf("Ingrese la altura: ");
        scanf("%f", &alturas);

        promedio += alturas / numeroAlturas;
        x++;
    }

    printf("Promedio de altura: %f", promedio);

    return 0;
}