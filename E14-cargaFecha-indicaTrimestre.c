#include <stdio.h>
int main()
{
    int dia, mes, anio;
    printf("Ingrese día:");
    scanf("%i", &dia);
    printf("Ingrese mes:");
    scanf("%i", &mes);
    printf("Ingrese año:");
    scanf("%i", &anio);
    if (mes <= 1 || mes == 3)
    {
        printf("El mes se encuentra en el primer trimestre del año");
    }
    else
    {
        printf("El mes No se encuentra en el primer trimestre o no se ha manejado la excepcion en forma adecuada");
    }
    return 0;
}