#include <stdio.h>

int main() {
    int k, L;
    int contador = 0;

    // Entrada de datos
    printf("Introduce el numero k: ");
    if (scanf("%d", &k) != 1) return 1;

    printf("Introduce el limite superior L: ");
    if (scanf("%d", &L) != 1) return 1;

    // Validación básica para evitar bucles infinitos
    if (k <= 0) {
        printf("El numero k debe ser mayor que 0.\n");
        return 1;
    }

    // Proceso e impresión de múltiplos
    for (int i = k; i <= L; i += k) {
        if (contador > 0) {
            printf(" - "); // Imprime el guión solo entre números
        }
        printf("%d", i);
        contador++;
    }

    // Impresión del resultado final
    if (contador > 0) {
        printf(" (%d multiplos)\n", contador);
    } else {
        printf("No se encontraron multiplos en el rango.\n");
    }

    return 0;
}
