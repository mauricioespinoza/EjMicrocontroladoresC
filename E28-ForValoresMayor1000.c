#include <stdio.h>

int main()
{
    int cantidad, n, f, valor;

    cantidad = 0;

    printf("Cuantos valores ingresara: ");
    scanf("%i", &n);

    for (f = 1; f <= n; f++)
    {
        printf("Ingrese el valor: ");
        scanf("%i", &valor);

        if (valor >= 1000)
            cantidad = cantidad + 1;
    }

    printf("Valores >= 1000: %i\n", cantidad);

    return 0;
}