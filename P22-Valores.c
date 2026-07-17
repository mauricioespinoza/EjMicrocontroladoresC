#include <stdio.h>
int main()
{
    int  x, contPositivo = 0, contNegativo = 0, contMultiplo15 = 0, sumaPar = 0, valor;
    for (x = 0; x < 10; x++) {
        valor = 0;
        while (valor == 0) {
            printf("Ingrese numero No %i: ", x+1);
            scanf("%d", &valor);
            if (valor == 0) {
                printf("No esta permitido el ingreso de valores 0\n");
                valor = 0;
            }
        }
        if (valor > 0){
            contPositivo++;
        }
        if (valor < 0){
            contNegativo++;
        }
        if (valor % 15 == 0){
            contMultiplo15++;
        }
        if (valor % 2 == 0) {
            sumaPar = sumaPar + valor;
        }
    }
    printf("La cantidad de numeros positivos ingresados es: %i\n", contPositivo);
    printf("La cantidad de numeros negativos ingresados es: %i\n", contNegativo);
    printf("La cantidad de numeros múltiplos de 15 ingresados es: %i\n", contMultiplo15);
    printf("La suma de numeros pares ingresados es: %i\n", sumaPar);
    return 0;
}