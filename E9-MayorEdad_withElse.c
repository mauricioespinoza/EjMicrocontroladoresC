// Al introducir la edad de una persona, saber si es mayor de
// edad
#include <stdio.h>
int main()
{
    int edad;
    printf("introduzca la edad de la persona: ");
    scanf("%d",&edad);
    if (edad>=18)
    {
        printf("la persona es mayor de edad");
    }
    else
    {
        printf("la persona es menor de edad");
    }
    return 0;
}