#include <stdio.h>

int main()
{
    int mul3, mul5, valor, f;

    mul3 = 0;
    mul5 = 0;

    for (f = 1; f <= 10; f++)
    {
        printf("Ingrese valor %i: ", f);
        scanf("%i", &valor);

        if (valor % 3 == 0) // múltiplo de 3
        {
            mul3 = mul3 + 1;
        }

        if (valor % 5 == 0) // múltiplo de 5
        {
            mul5 = mul5 + 1;
        }
    }

    printf("Multiplos de 3: %i\n", mul3);
    printf("Multiplos de 5: %i\n", mul5);

    return 0;
}