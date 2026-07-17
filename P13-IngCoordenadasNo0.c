#include <stdio.h>
int main()
{
    int x = 0;
    int y = 0;
    while (x == 0 || y == 0){
        printf(" Introduzca la primera coordenada x:");
        scanf("%i", &x);
        printf(" Introduzca la segunda coordenada y:");
        scanf("%i", &y);
        if (x == 0 || y == 0) {
            printf("No esta permitido el ingreso de coordenadas con valor 0\n");
        }
        else {
            printf("El cuadrante ingresado es X = %i e Y = %i\n", x, y);
            if (x > 0 && y > 0){
                printf("El punto se encuentra en el primer cuadrante");
            }
            else if (x < 0 && y > 0){
                printf("El punto se encuentra en el segundo cuadrante");
            }
            else if (x < 0 && y < 0){
                printf("El punto se encuentra en el tercer cuadrante");
            }
            else{
                printf("El punto se encuentra en el cuarto cuadrante");
            }
        }
    }
    return 0;
}