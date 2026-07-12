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
printf(" este es el numero mayor: %i",num1);
}
else
{
printf(" este es el numero mayor: %i",num2);
}
return 0;
}