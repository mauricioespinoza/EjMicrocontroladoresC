#include <stdio.h>

int main()
{
    int multiplos;

    multiplos = 8;

    while (multiplos <= 500)
    {
        printf("%i - ", multiplos);
        multiplos += 8;
    }

    return 0;
}