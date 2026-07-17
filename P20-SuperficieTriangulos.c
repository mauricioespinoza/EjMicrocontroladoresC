#include <stdio.h>
int main()
{
    int n, x, contTriangulos = 0;
    printf("Cuantos triangulos se procesaran?: ");
    scanf("%i", &n);
    float altura[n], base[n], superficie[n];
    for (x = 0; x < n; x++){
        printf("Ingrese altura para triangulo No %i: ", x+1);
        scanf("%f", &altura[x]);
        printf("Ingrese base para triangulo No %i: ", x+1);
        scanf("%f", &base[x]);
        superficie[x] = (altura[x] * base[x])/2;
        if (superficie[x] > 12) {
            contTriangulos++;
        }
    }
    printf("\n--- Resultados Generales ---\n");
    for (x = 0; x < n; x++) {
        printf("La altura para triangulo %i es %f\n", x+1, altura[x]);
        printf("La base para triangulo %i es %f\n", x+1, base[x]);
        printf("El area para triangulo %i es %f\n", x+1, superficie[x]);
    }
    printf("La cantidad de triangulos con una superficie mayor de 12 es %i", contTriangulos);
    return 0;
}