#include <stdio.h>
int main()
{
    float lado_a, lado_b, lado_c;
    int equilatero = 0, isosceles = 0, escaleno = 0, n, f;
    printf("Cuantos triangulos se procesaran?: ");
    scanf("%i", &n);
    for (f = 1; f <= n; f++){
        //Implicito se debe validar que la suma de 2 lados de un triangulo sea mayor al tercer lado
        int es_valido = 0;
        while (!es_valido) {
            lado_a = 0.0; lado_b = 0.0; lado_c = 0.0;
            while (lado_a <= 0.0) {
                printf("\nTriangulo No %i - Ingrese el lado A: ", f);
                scanf("%f", &lado_a);
                if (lado_a <= 0.0) {
                    printf("Error: Ingrese un valor mayor que cero.\n");
                }
            }
            while (lado_b <= 0.0) {
                printf("Triangulo No %i - Ingrese el lado B: ", f);
                scanf("%f", &lado_b);
                if (lado_b <= 0.0) {
                    printf("Error: Ingrese un valor mayor que cero.\n");
                }
            }
            while (lado_c <= 0.0) {
                printf("Triangulo No %i - Ingrese el lado C: ", f);
                scanf("%f", &lado_c);
                if (lado_c <= 0.0) {
                    printf("Error: Ingrese un valor mayor que cero.\n");
                }
            }
            // Teorema de la desigualdad triangular
            if ((lado_a + lado_b > lado_c) && (lado_a + lado_c > lado_b) && (lado_b + lado_c > lado_a)) {
                es_valido = 1;
            }
            else {
                printf("Error: Esos lados no forman un triangulo valido. Intente de nuevo.\n");
            }
        }
        if (lado_a == lado_b && lado_b == lado_c) {
            printf("-> El triangulo %i es: Equilatero\n", f);
            equilatero++;
        }
        else if (lado_a == lado_b || lado_b == lado_c || lado_a == lado_c) {
            printf("-> El triangulo %i es: Isosceles\n", f);
            isosceles++;
        }
        else {
            printf("-> El triangulo %i es: Escaleno\n", f);
            escaleno++;
        }
    }

    printf("\n--- Resultados Generales ---");
    printf("\nCantidad de Equilateros: %i", equilatero);
    printf("\nCantidad de Isosceles: %i", isosceles);
    printf("\nCantidad de Escalenos: %i\n", escaleno);
    printf("Tipo con menor cantidad de apariciones: ");
    if (equilatero <= isosceles && equilatero <= escaleno) {
        printf(" Equilatero (%i)\n", equilatero);
    }
    else if (isosceles <= equilatero && isosceles <= escaleno) {
        printf(" Isosceles (%i)\n", isosceles);
    }
    else {
        printf(" Escaleno (%i)\n", escaleno);
    }
    return 0;
}