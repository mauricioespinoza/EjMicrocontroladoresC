#include <stdio.h>

int main()
{
    int x = 1;      // Contador de términos (1 a 25)
    int numero = 0; // Acumula los múltiplos de 11

    while (x <= 25) // Repetir 25 veces
    {
        numero += 11; // Sumar 11 en cada iteración
        printf("%i - ", numero); // Imprimir término
        x++;
    }

    return 0;
}