#include <stdio.h>

int main()
{
    int x;

    x = 1;

    while (x <= 100)
    {
        printf("%i - ", x);
        x = x + 1;
    }

    return 0;
}