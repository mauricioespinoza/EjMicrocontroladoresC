#include <stdio.h>

int main()
{
    int f;
    int numeros[4];
    for (f = 0; f < 4; f++)
    {
        printf("Ingrese numero %i: ", f + 1);
        scanf("%i", &numeros[f]);
    }
    // Impresión de resultados
    printf("La suma de %i + %i = %i\n",numeros[0] , numeros[1], (numeros[0]+numeros[1]));
    printf("La multiplicacion de %i * %i = %i",numeros[2] , numeros[3], (numeros[2]*numeros[3]));
    return 0;
}