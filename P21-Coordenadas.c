#include <stdio.h>
int main()
{
    int n, x, cont1cuadrante = 0, cont2cuadrante = 0, cont3cuadrante = 0, cont4cuadrante = 0;
    printf("Cuantos coordenadas se procesaran?: ");
    scanf("%i", &n);
    float coord_x[n], coord_y[n];
    for (x = 0; x < n; x++) {
        coord_x[x] = 0;
        coord_y[x] = 0;
        while (coord_x[x] == 0 || coord_y[x] == 0) {
            printf("Ingrese coordenada X para punto No %i: ", x+1);
            scanf("%f", &coord_x[x]);
            printf("Ingrese coordenada Y para punto No %i: ", x+1);
            scanf("%f", &coord_y[x]);
            if (coord_x[x] == 0 || coord_y[x] == 0) {
                printf("No esta permitido el ingreso de coordenadas con valor 0\n");
                coord_x[x] = 0;
                coord_y[x] = 0;
            }
        }
        printf("El cuadrante ingresado es X = %f e Y = %f\n", coord_x[x], coord_y[x]);
        if (coord_x[x] > 0 && coord_y[x] > 0){
            cont1cuadrante++;
        }
        else if (coord_x[x] < 0 && coord_y[x] > 0){
            cont2cuadrante++;
        }
        else if (coord_x[x] < 0 && coord_y[x] < 0){
            cont3cuadrante++;
        }
        else{
            cont4cuadrante++;
        }
    }
    printf("La cantidad de puntos para 1er cuadrante es: %i\n", cont1cuadrante);
    printf("La cantidad de puntos para 2o cuadrante es: %i\n", cont2cuadrante);
    printf("La cantidad de puntos para 3er cuadrante es: %i\n", cont3cuadrante);
    printf("La cantidad de puntos para 4o cuadrante es: %i\n", cont4cuadrante);
    return 0;
}