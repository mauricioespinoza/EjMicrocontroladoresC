#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void)
{
    float radio = 5.0;
    float area;
    float perimetro;
    area = PI * radio * radio;
    perimetro = 2 * PI * radio;
    printf("--- Calculo del Circulo ---\n");
    printf("Radio = %.2f cm\n", radio);
    printf("Area = %.2f cm2\n", area);
    printf("Perimetro = %.2f cm\n", perimetro);
    return 0;
}
