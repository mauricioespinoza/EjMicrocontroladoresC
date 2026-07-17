#include <stdio.h>
int main()
{
    int num1, num2;
    printf(" Introduzca el primer numero:");
    scanf("%i",& num1);
    printf(" Introduzca el segundo numero:");
    scanf("%i",& num2);
    if(num1>num2)
    {
        printf("Este es el numero mayor: %i\n",num1);
        printf("Este es el resultado de la suma %i + %i = %i\n",num1, num2, num1+num2);
        printf("Esta es la diferencia entre %i y %i : %i",num1, num2, num1-num2);
    }
    else if (num1<num2)
    {
        printf("Este es el numero mayor: %i\n",num2);
        printf("Este es el producto de la multiplicacion de %i * %i = %i\n",num1, num2, num1*num2);
        printf("Esta es la division entre %i y %i : %.2f",num1, num2, (float)num1/num2);
    }
    else {
        printf("Ambos numeros son iguales o ha ocurrido un defecto inesperado");
    }
    return 0;
}