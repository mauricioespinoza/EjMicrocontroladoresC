#include <stdio.h>
int main()
{
    int sueldo;
    printf(" Introduzca el valor del sueldo:");
    scanf("%i",& sueldo);
    if(sueldo>=3000)
    {
        printf(" Esta persona tiene que pagar impuestos");
    }
    else
    {
        printf(" Esta persona no tiene que pagar impuestos");
    }
    return 0;
}