#include <stdio.h>
int main()
{
    int x = 1;
    int valor;
    int suma1 = 0;
    int suma2 = 0;
    while (x <= 15)
    {
        printf("Lista 1 - Valor %i: ", x);
        scanf("%i", &valor);

        suma1 += valor;
        x++;
    }
    x = 1;
    while (x <= 15)
    {
        printf("Lista 2 - Valor %i: ", x);
        scanf("%i", &valor);

        suma2 += valor;
        x++;
    }
    if (suma1 > suma2)
        printf("Lista 1 mayor");
    else if (suma2 > suma1)
        printf("Lista 2 mayor");
    else
        printf("Listas iguales");
    return 0;
}