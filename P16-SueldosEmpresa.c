#include <stdio.h>
int main()
{
    int sueldo, sumaSueldo, cont300, cont500, n, f;
    cont300 = 0;
    cont500 = 0;
    sumaSueldo = 0;
    printf("Cuantos sueldos de empleados se procesaran?: ");
    scanf("%i", &n);
    for (f = 1; f <= n; f++){
        sueldo = 0;
        while (sueldo <100 || sueldo > 500) {
            printf("Ingrese el sueldo para empleado No %i : ", f);
            scanf("%d", &sueldo);
            if (sueldo <100 || sueldo > 500) {
                printf("Ingrese un sueldo comprendido entre 100 y 500\n");
                printf("para empleado No %i\n", f);
                sueldo = 0;
            }
        }
        sumaSueldo = sumaSueldo + sueldo;
        if (sueldo >= 100 && sueldo <= 300) {
            cont300++;
        }
        else if (sueldo > 300 && sueldo <=500) {
            cont500++;
        }
    }
    printf("\n--- Resultados ---\n");
    printf("Empleados que cobran hasta 300: %i\n", cont300);
    printf("Empleados que cobran mas de 300: %i\n", cont500);
    printf("Gasto en sueldos de la empresa: $%i\n", sumaSueldo);
    return 0;
}