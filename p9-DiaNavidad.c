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
    if (dia == 25 && mes == 12)
    {
        printf("Es el %i de Diciembre del año %i, feliz navidad!", dia, anio);
    }
    else
    {
        printf("Aun falta para navidad :'(");
    }
    return 0;
}