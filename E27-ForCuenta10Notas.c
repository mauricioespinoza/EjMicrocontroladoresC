#include <stdio.h>

int main()
{
    int aprobados, reprobados, f, nota;

    aprobados = 0;
    reprobados = 0;

    for (f = 1; f <= 10; f++)
    {
        printf("Ingrese la nota: ");
        scanf("%i", &nota);

        if (nota >= 7)
            aprobados = aprobados + 1;
        else
            reprobados = reprobados + 1;
    }

    printf("Aprobados: %i\n", aprobados);
    printf("Reprobados: %i\n", reprobados);

    return 0;
}