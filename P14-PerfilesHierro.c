#include <stdio.h>

int main()
{
    float medida;
    int aptas, n, f;
    aptas = 0;
    printf("Cuantos perfiles se procesaran: ");
    scanf("%i", &n);

    for (f = 1; f <= n; f++){
        printf("Ingrese el largo del perfil en mts.: ");
        scanf("%f", &medida);
        if (medida >= 1.20 && medida <= 1.30) {
            aptas = aptas + 1;
        }
    }
    printf("Perfiles aptos: %i\n", aptas);
    return 0;
}