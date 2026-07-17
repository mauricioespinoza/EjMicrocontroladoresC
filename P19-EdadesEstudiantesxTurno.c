#include <stdio.h>

int main()
{
    int f, edad, suma;
    float promedioManana, promedioTarde, promedioTNoche;
    // --- Turno Mañana ---
    suma = 0;
    for (f = 1; f <= 5; f++){
        printf("Ingrese edad estudiante turno manana %i: ", f);
        scanf("%d", &edad);
        suma += edad;
    }
    promedioManana = (float)suma / 5.0;
    // --- Turno Tarde ---
    suma = 0;
    for (f = 1; f <= 6; f++){
        printf("Ingrese edad estudiante turno tarde %i: ", f);
        scanf("%d", &edad);
        suma += edad;
    }
    promedioTarde = (float)suma / 6.0; 
    // --- Turno Noche ---
    suma = 0;
    for (f = 1; f <= 11; f++){
        printf("Ingrese edad estudiante turno noche %i: ", f);
        scanf("%d", &edad);
        suma += edad;
    }
    promedioTNoche = (float)suma / 11.0;

    // --- Mostrar Resultados (Punto b) ---
    printf("\n--- Resultados Generales ---\n");
    printf("Promedio de Edad Turno Mañana: %.2f\n", promedioManana);
    printf("Promedio de Edad Turno Tarde:  %.2f\n", promedioTarde);
    printf("Promedio de Edad Turno Noche:  %.2f\n", promedioTNoche);

    // --- Menor Promedio (Punto c) ---
    printf("\nEl turno con el menor promedio de edades es: ");
    if (promedioManana <= promedioTarde && promedioManana <= promedioTNoche) {
        printf("Turno Mañana (%.2f)\n", promedioManana);
    }
    else if (promedioTarde <= promedioManana && promedioTarde <= promedioTNoche) {
        printf("Turno Tarde (%.2f)\n", promedioTarde);
    }
    else {
        printf("Turno Noche (%.2f)\n", promedioTNoche);
    }

    return 0;
}
