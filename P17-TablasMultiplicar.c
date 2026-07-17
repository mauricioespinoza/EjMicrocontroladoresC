#include <stdio.h>
int main()
{
    int valor, x, factor;
    valor = 0;
    while (valor < 1 || valor > 10) {
        printf("Ingrese el número para obtener su tabla de multiplicar: ");
        scanf("%d", &valor);
        if (valor < 1 || valor > 10) {
            printf("Ingrese un numero comprendido entre 1 y  10\n");
            valor = 0;
        }
    }
    factor = 1;
    for (x = valor; x <= (valor * 12); x = x + valor){
        printf("%i * %i = %i\n", valor, factor, x);
        factor++;
    }
}