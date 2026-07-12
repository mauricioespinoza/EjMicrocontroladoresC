#include <stdio.h>
int main() {
    int valor;
    printf(" Introduzca un numero:");
    scanf("%i", &valor);
    if(valor >= 10 && valor < 100)
    {
        printf(" el valor tiene dos cifras");
    }
    else if (valor < 10)
    {
        printf("el valor tiene una cifra");
    }
}