#include <stdio.h>

int main() {
    float neto, propina, por_propina, total_final;
    printf("Ingrese el total de la cuenta: \n");
    scanf("%f", &neto);
    printf("Ingrese el porcentaje deseado a dejar como propina: \n");
    scanf("%f", &por_propina);
    propina = neto * (por_propina/100.0);
    total_final= neto + propina;
    printf("El valor final a pagar es $ %f\n", total_final);
    return 0;
}
