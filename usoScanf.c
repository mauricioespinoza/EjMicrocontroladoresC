#include <stdio.h>

int main(void) {
    int numero;
    float precio;
    double masa;
    char letra;
    char nombre[10];
    printf("Ingrese un número:\n");
    scanf("%d", &numero);
    printf("Ingrese un float:\n");
    scanf("%f", &precio);
    printf("Ingrese un double:\n");
    scanf("%lf", &masa);
    printf("Ingrese un char:\n");
    scanf(" %c", &letra);
    printf("Ingrese un string (cadena de char):\n");
    scanf("%s", nombre);
    // Ejemplo 3: leer múltiples valores en una sola llamada
    int dia, mes, anio;
    printf("Ingrese fecha (dd mm aaaa): \n");
    scanf("%d %d %d", &dia, &mes, &anio);
    printf("Fecha: %02d/%02d/%04d\n", dia, mes, anio);
    return 0;
}