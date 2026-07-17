#include <stdio.h>
int main()
{
    float nota;
    int aprobados, rechazados, f;
    aprobados = 0;
    rechazados = 0;
    for (f = 1; f <= 10; f++){
        printf("Ingrese nota del alumno: ");
        scanf("%f", &nota);
        if (nota >= 7) {
            aprobados = aprobados + 1;
        }
        else if (nota <7) {
            rechazados = rechazados + 1;
        }
    }
    printf("Notas Aprobadas: %i\n", aprobados);
    printf("Notas Rechazadas: %i\n", rechazados);
    return 0;
}