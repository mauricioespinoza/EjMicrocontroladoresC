#include <stdio.h>
int main() {
    float examen1, examen2, notaFinal;
    // Entrada de datos
    printf("Ingrese el primer examen: ");
    scanf("%f", &examen1);
    printf("Ingrese el segundo examen: ");
    scanf("%f", &examen2);
    // Proceso: Cálculo del promedio
    // Usamos paréntesis para que la suma se haga antes que la división
    notaFinal = (examen1 + examen2) / 2;
    // Salida de datos
    printf("La nota final es: %.2f\n", notaFinal);
    return 0;
}
