#include <stdio.h>
int main() {
    int resultado = 5 + 10 * 2;
    // Paso 1: 10 * 2 = 20 (* tiene mayor prioridad que +)
    // Paso 2: 5 + 20 = 25
    printf("El resultado es: %d\n", resultado); // Imprime 25
    return 0;
}
