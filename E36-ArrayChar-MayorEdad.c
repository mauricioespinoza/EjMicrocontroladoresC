#include <stdio.h>
#include <string.h>
int main()
{
    char nombre1[21], nombre2[21];
    int edad1, edad2;

    printf("Nombre de la primera persona: ");
    fgets(nombre1, 21, stdin);
    nombre1[strcspn(nombre1, "\n")] = '\0';

    printf("Edad: ");
    scanf("%i", &edad1);
    getchar();

    printf("Nombre de la segunda persona: ");
    fgets(nombre2, 21, stdin);
    nombre2[strcspn(nombre2, "\n")] = '\0';

    printf("Edad: ");
    scanf("%i", &edad2);

    if (edad1 > edad2)
        printf("La persona de mayor edad es: %s\n", nombre1);
    else if (edad2 > edad1)
        printf("La persona de mayor edad es: %s\n", nombre2);
    else
        printf("Tienen la misma edad.\n");

    return 0;
}