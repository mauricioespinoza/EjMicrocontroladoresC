#include <stdio.h>

int main()
{
    float sueldo;
    int antiguedad;

    printf("Introduzca sueldo: ");
    scanf("%f", &sueldo);

    printf("Introduzca antiguedad (anos): ");
    scanf("%i", &antiguedad);

    if (sueldo < 500 && antiguedad >= 10)
    {
        float sueldoN = sueldo + (0.20 * sueldo);
        printf("Sueldo con aumento 20%%: %f", sueldoN);
    }
    else
    {
        if (sueldo < 500 && antiguedad < 10)
        {
            float sueldoNu = sueldo + (0.05 * sueldo);
            printf("Sueldo con aumento 5%%: %f", sueldoNu);
        }
        else
        {
            printf("Sueldo sin cambios: %f", sueldo);
        }
    }

    return 0;
}