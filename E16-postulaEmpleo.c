#include <stdio.h>

int main()
{
    int cantidadTotal, cantidadCorrecta;
    int porcentaje;

    printf("Introduzca total de preguntas: ");
    scanf("%i", &cantidadTotal);

    printf("Preguntas correctas: ");
    scanf("%i", &cantidadCorrecta);

    porcentaje = cantidadCorrecta * 100 / cantidadTotal;

    if (porcentaje >= 90)
    {
        printf("Nivel maximo");
    }
    else
    {
        if (porcentaje >= 75 && porcentaje < 90)
        {
            printf("Nivel medio");
        }
        else
        {
            if (porcentaje >= 50 && porcentaje < 75)
            {
                printf("Nivel regular");
            }
            else
            {
                printf("Fuera de nivel");
            }
        }
    }

    return 0;
}