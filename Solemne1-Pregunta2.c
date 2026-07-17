#include <stdio.h>
int main()
{
    int es_valido, cant_calorias, sum_calorias, contador;;
    do {
        printf("Ingrese un valor calorico del alimento: ");
        scanf("%d", &cant_calorias);
        sum_calorias = sum_calorias + cant_calorias;
        contador++;
        printf("Desea cargar otro valor [s(1)/n(0)]: ");
        scanf(" %d", &es_valido);
    } while (es_valido == 1);
    printf("El consumo total de calorias fue: %i\n", sum_calorias);
    printf("El promedio de calorias consumida por elimento fue: %f\n", (float)sum_calorias/contador);
    return 0;
}