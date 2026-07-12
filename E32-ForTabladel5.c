#include <stdio.h>

int main()
{
    int x;
    int factor = 1;

    for (x = 5; x <= 50; x = x + 5)
    {
        printf("%i * %i = %i\n", 5, factor, x);
        factor++;
    }

    return 0;
}