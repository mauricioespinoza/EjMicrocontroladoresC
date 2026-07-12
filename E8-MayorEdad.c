#include <stdio.h>
int main()
{
    int edad;
    printf(" Introduzca la edad:\n");
    scanf("%d",&edad);
    if(edad>=18)
    {
        printf("Esta persona es mayor de edad");
    }
    return 0;
}