#include <stdio.h>
int main(){
    int k = 0, L = 0, contador = 0;
    while (k <= 0) {
        printf("Ingrese un numero positivo K: \n");
        scanf("%d", &k);
        if (k <= 0) {
            printf("El numero k debe ser positivo y mayor que 0\n");
            L = 0;
        }
    }
    while (L == 0 || L < k) {
        printf("Ingrese el limite superior L: \n");
        scanf("%d", &L);
        if (L == 0 || L < k) {
            printf("El Limite L debe ser mayor que 0 y que %i (k)\n", k);
            L = 0;
        }
    }
    for (int i = k; i <= L; i += k) {
        if (contador > 0) {
            printf(" - ");
        }
        printf("%d", i);
        contador++;
    }
    if (contador > 0) {
        printf(" (%d multiplos)\n", contador);
    } else {
        printf("No se encontraron multiplos en el rango.\n");
    }
    return 0;
}