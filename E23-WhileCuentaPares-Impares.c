#include <stdio.h>

int main()
{
    int x, n, valor;
    int cantidadPar = 0;    // Contador de números pares
    int cantidadImpar = 0;  // Contador de números impares
    x = 1;
    printf("Ingrese la cantidad de numeros a procesar: ");
    scanf("%i", &n);
    while (x <= n)
    {
        printf("Ingrese el valor %i: ", x);
        scanf("%i", &valor);
        if (valor % 2 == 0) // Resto 0 -> número par
        {
            cantidadPar++;
        }
        else // Resto != 0 -> número impar
        {
            cantidadImpar++;
        }
        x++;
    }
    printf("\nCantidad de numeros pares: %i\n", cantidadPar);
    printf("Cantidad de numeros impares: %i\n", cantidadImpar);
    return 0;
}