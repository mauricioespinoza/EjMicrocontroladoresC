#include <stdio.h>

void presentacion()
{
    printf("Programa de suma de dos valores\n");
    printf("Efectua la suma e imprime el resultado\n");
    printf("*************************************\n");
}

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

void finalizacion()
{
    printf("\n*************************************\n");
    printf("Gracias por utilizar este programa\n");
}

int main()
{
    presentacion();
    cargaSuma();
    finalizacion();

    return 0;
}