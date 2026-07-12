#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    // Uso de formato "cadena de format", argumento 1, arg 2, arg n..
    printf("%d\n", 42); //%d o %i -> entero decimal con signo
    //Uso de secuencias de escape (Comillas, tabulacion, backslash)
    printf("Col1\tCol2\tCol3\n"); //\t -> Tabulacion horizontal
    printf("C:\\Users\n"); //Imprime back slash
    printf("%u\n", 255); //%u -> entero sin signo (unsigned):
    printf("El valor es \"alto\"\n"); // Uso de comillas
    printf("%f\n", 3.14); // imprime 3.140000, %f -> flotante:
    printf("%.2f\n", 3.14159); //%.2f -> flotante con 2 decimales:
    printf("%c\n", 'A'); //%c -> caracter:
    printf("%s\n", "Hola"); //%s -> cadena:
    printf("%X\n", 255); // FF %x o %X -> hexadecimal:
    printf("%o\n", 8); // 10 %o -> octal:
    return 0;
}