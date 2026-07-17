#include <stdio.h>
int main()
{
    int cant_articulos;
    float valor_art;
    printf("\n Introduzca cantidad de articulos: ");
    scanf("%d", &cant_articulos);
    printf("\n Introduzca precio por articulo: ");
    scanf("%f", &valor_art);
    printf("El importe a pagar es: %.2f", (float)cant_articulos * valor_art);
    return 0;
}