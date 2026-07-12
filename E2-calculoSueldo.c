#include <stdio.h>
int main()
{
    int horas_trabajadas;
    float valor_hora;
    float sueldo;
    printf("\n introduzca las horas trabajadas");
    scanf("%d", &horas_trabajadas);
    printf("\n introduzca el valor hora");
    scanf("%f", &valor_hora);
    sueldo = horas_trabajadas * valor_hora;
    printf("el sueldo a cobrar es: %.2f", sueldo);
    return 0;
}