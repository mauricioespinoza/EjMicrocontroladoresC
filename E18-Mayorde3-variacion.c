#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese primer valor: ");
    scanf("%i", &num1);

    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);

    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);

    // Encontrar el menor
    if (num1 < num2 && num1 < num3)
    {
        printf("Menor: %i", num1);
    }
    else if (num2 < num3)
    {
        printf("Menor: %i", num2);
    }
    else
    {
        printf("Menor: %i", num3);
    }

    // Encontrar el mayor
    if (num1 > num2 && num1 > num3)
    {
        printf("Mayor: %i", num1);
    }
    else if (num2 > num3)
    {
        printf("Mayor: %i", num2);
    }
    else
    {
        printf("Mayor: %i", num3);
    }

    return 0;
}