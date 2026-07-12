#include <stdio.h>

void calcularSueldo(float costoHora, int cantidadHoras)
{
    float sueldo = costoHora * cantidadHoras;

    printf("Sueldo total a pagar: $%.2f\n", sueldo);
}

int main()
{
    float costoHora;
    int cantidadHoras;
    char opcion;

    do
    {
        printf("Pago por hora: ");
        scanf("%f", &costoHora);

        printf("Horas trabajadas: ");
        scanf("%i", &cantidadHoras);

        calcularSueldo(costoHora, cantidadHoras);

        printf("¿Calcular otro empleado? [s/n]: ");
        scanf(" %c", &opcion);

    } while (opcion == 's');

    return 0;
}