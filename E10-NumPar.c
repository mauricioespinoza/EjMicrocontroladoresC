// determina si un número es par o no
#include <stdio.h>
int main()
{
    int numero;
    printf("introduzca un numero: ");
    scanf("%d",&numero);
    if ((numero%2)==0)
    {
        printf("el numero es par");
    }
    else
    {
        printf("el numero es impar");
    }
    return 0;
}