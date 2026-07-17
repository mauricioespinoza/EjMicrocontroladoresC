#include <stdio.h>

int main()
{
    int f;
    int numeros[4];
    int suma = 0;
    for (f = 0; f < 4; f++)
    {
        printf("Ingrese numero %i: ", f + 1);
        scanf("%i", &numeros[f]);
        suma = suma + numeros[f];
    }
    // Impresión de resultados
    printf("La suma de %i + %i + %i + %i = %i\n",numeros[0] , numeros[1], numeros[2], numeros[3], suma);
    printf("El Promedio de %i + %i + %i + %i es %.2f\n",numeros[0], numeros[1], numeros[2], numeros[3], (float)suma/4);
    return 0;
}