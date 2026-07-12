#include <stdio.h>

void cargaSuma()
{
    int valor1, valor2, suma;

    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);

    suma = valor1 + valor2;

    printf("La suma es: %i\n", suma);
}

void separacion()
{
    printf("\n****************************\n\n");
}

int main()
{
    cargaSuma();
    separacion();

    cargaSuma();
    separacion();

    return 0;
}